/*
 * functions.cpp
 *
 *  Created on: Jan 29, 2015
 *      Author: ashissi3
 */
#include "functions.h"

BST::BST()
{
	root = NULL;
}

void BST::inserthelper(Node * a, int data)
{

	if(data <= (a->data))
		{
			if(a->left)
				inserthelper(a->left, data);
			else
			{
				a->left= new Node();
				a->left->data = data;
				a->left->left = NULL;
				a->left->right = NULL;
			}

		}
	else
	{
		if(a->right)
			inserthelper(a->right, data);
		else
		{
			a->right= new Node();
			a->right->data = data;
			a->right->left = NULL;
			a->right->right = NULL;
		}
	}

}

void BST::insert(int data)
{
	if(root==NULL)
		{
			Node * n = new Node();
			n->left = NULL;
			n->right = NULL;
			n->data = data;
			root = n;
		}
	else
	inserthelper(root, data);
}

void BST::inorderhelper(Node * node)
{
	if(node==NULL)
		return;

	inorderhelper(node->left);
	cout<<node->data<<" ";
	inorderhelper(node->right);

}

void BST::inorder()
{
	inorderhelper(root);
}



void BST::insertHelper(Node **node,int data)
{

	if(*node == NULL)
	{
		*node = new Node();
		(*node) -> data = data;
		(*node) -> left = NULL;
		(*node) -> right = NULL;
	}

	else if(data < (*node) -> data)
	{
		insertHelper(&((*node) -> left) ,data);

	}

	else

		insertHelper(&((*node) -> right) ,data);

}


void BST::Insert(int data)
{
	insertHelper(&root,data);
}


int BST::hasPathSum(int sum){
	return hasPathSumHelper(root,sum);

}


int BST::hasPathSumHelper(Node* node,int sum){

	if(node == NULL){
		return (sum == 0);
	}
	if(node->left == NULL && node -> right == NULL){

		return ((sum - (node->data))==0);
	}
	else{

		int subsum = sum - (node ->data);
		cout<<"Subsum"<<subsum<<endl;
		return (hasPathSumHelper(node->left,subsum) || hasPathSumHelper(node -> right,subsum));

	}
}

void BST::printlevelorder()
{
	printlevelorderhelper(root);
}

void BST::printlevelorderhelper(Node*node)
{
	if(node==NULL)
	{
		return;
	}
	else
		cout<<node->data<<endl;
	printlevelorderhelper(node->left);
	printlevelorderhelper(node->right);
}


void BST::printAllPossiblePaths(){
	if(root == NULL){
		cout<<endl<<"Tree empty.No possible paths exist"<<endl;
	}
	else{
		int paths[20];
		printAllPossiblePathsHelper(root,paths,0);
	}
}


void BST::printAllPossiblePathsHelper(Node* node,int paths[],int len){
	if(node == NULL){
		return;
			}
	paths[len++] = node->data;
	printAllPossiblePathsHelper(node->left,paths,len);
	printAllPossiblePathsHelper(node->right,paths,len);
	printPath(paths,len);
}

void BST::printPath(int paths[],int len){
	cout<<endl;
	cout<<"Possible path:"<<endl;
	for(int i=0;i<len;i++){
		cout<<paths[i]<<"->";
	}
	cout<<endl;
}

void BST::deleteBST(){
	if(root == NULL){
		cout<<"tree empty.Nothing to delete"<<endl;
	}
	else{
		deleteBSTHelper(root);

	}

}


void BST::deleteBSTHelper(Node *node){
	if(node == NULL){
		return;
	}
	if(node->left == NULL && node->right ==NULL){
		cout<<"Deleted Node: "<<node->data<<endl;
		delete node;
		node = NULL;
	}
	else{
		if(node -> left){
			deleteBSTHelper(node->left);
			node->left=NULL;
		}
		if(node -> right){
			deleteBSTHelper(node->right);
			node->right=NULL;
				}
		deleteBSTHelper(node);
	}
}

void BST::checkempty()
{

		cout<<"BST is not empty\n";
		cout<<root->data<<endl;
		cout<<root->left->data<<endl;
		cout<<root->right->data<<endl;

}
void BST::BSTdeletesimple()
{
	if(root == NULL){
			cout<<"tree empty.Nothing to delete"<<endl;
		}
		else{
			BSTdeletesimpleHelper(root);

		}

}

void BST::BSTdeletesimpleHelper(Node *node)
{
	if(node->left == NULL && node->right ==NULL){
			cout<<"Deleted Node: "<<node->data<<endl;
			delete node;
			node = NULL;
		}

}


void BST::bstdeletegeeks()
{
	if(root == NULL){
			cout<<"tree empty.Nothing to delete"<<endl;
		}
		else{
			bstdeletegeekshelper(root);

		}
}

void BST::bstdeletegeekshelper(Node *node)
{
	if (node == NULL) return;

	    /* first delete both subtrees */
	bstdeletegeekshelper(node->left);
	bstdeletegeekshelper(node->right);

	    /* then delete the node */
	    printf("\n Deleting node: %d", node->data);
	    delete node;
}

void BST::deleteusingdoublehelper(Node ** node)
{
	if (*node == NULL) return;

		/* first delete both subtrees */
	deleteusingdoublehelper(&(*node)->left);
	deleteusingdoublehelper(&(*node)->right);

		/* then delete the node */
		printf("\n Deleting node: %d", (*node)->data);
		delete *node;
		*node = NULL;
}

void BST::deleteusingdouble()
{
	if(root == NULL){
			cout<<"tree empty.Nothing to delete"<<endl;
		}
		else{
			deleteusingdoublehelper(&root);
		}
}
void BST::deletenodehelper(Node ** node, Node * temp)
{
	Node * parent = findparent(*node, temp);
	if(temp->left==NULL && temp->right==NULL)
	{
		if(parent->left==temp)
			parent->left = NULL;
		else
			parent->right = NULL;
		delete temp;
	}

	else if (temp->left!=NULL && temp->right==NULL)
	{
		if(parent->left==temp)
		{
			parent->left = temp->left;
		}
		else
		{
			parent->right = temp->left;
		}
		delete temp;

	}
	else if (temp->left==NULL && temp->right!=NULL)
	{
		if(parent->right==temp)
		{
			parent->right = temp->right;
		}
		else
		{
			parent->left = temp->right;
		}
		delete temp;
	}
	else
	{
		Node * current = temp;
		while(current->left!=NULL)
		{
			current = current->left;
		}
		Node * inorder = current;
		temp->data = current->data;
		deletenodehelper(&root, current);
	}
}


void BST::deletenode(int a)
{
	Node * temp = searchnode(a);
	if(temp)
	{
		deletenodehelper(&root, temp);
	}
	else
		printf("Node not present in the BST\n");
}


Node* BST::findparenthelper(Node * node, Node * temp)
{
	if(node==NULL)
		return NULL;

	if (temp->data < node->data)
	{
		if(node)
		return node;
	}
	else if (node->right==temp)
	{
		return node;
	}
	findparenthelper(node->left, temp);


}
Node* BST::findparent(Node * temp)
{
	if(temp->data==root->data)
	{
		return NULL;
	}
	else
		return findparenthelper(root, temp);
}


Node * BST::searchnodehelper(Node * node, int a)
{
	if(a==node->data)
		return node;
	else if(a<node->data)
	{
		if(node->left)
			searchnodehelper(node->left,a);
	}
	else if (a>node->data)
	{
		if(node->right)
			searchnodehelper(node->right,a);
	}
	return NULL;
}


Node* BST::searchnode(int a)
{
	if(root!=NULL)
	{
		return searchnodehelper(root,a);
	}
	else
	{
		return NULL;
	}
}
