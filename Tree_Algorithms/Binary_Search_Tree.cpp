#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *left,*right;
};
struct node *createNode(int item)//Creating new node
{
	struct node *newnode =(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node* insert(struct node* temp,int item)//inserting the nodes to the left orright
{
	if(temp==NULL)
	return createNode(item);
	else {
		if(item<temp->data)
		{
			temp->left=insert(temp->left,item);
		}
		else
		temp->right=insert(temp->right,item);
		return temp;
	}
}
struct node* BST_Search(struct node* root,int key)
{
	if(root==NULL||root->data==key)//if value matches or reaches to the leaf nodes
	return root;
	else 
	{
		if(root->data<key)
		//Searching in the right if value is greater
		return BST_Search(root->right,key);
		else //Searching in the left if value is less
		return BST_Search(root->left,key);
		
	 } 
}
int main()
{	int ch1,data;
	struct node *root=NULL;
	cout<<"Enter the data : ";
	cin>>data;
	int key;
	root=insert(root,data);
	
	
	do
	{	
		cout<<"Enter the data : ";
		cin>>data;	
		insert(root,data);
		cout<<"Enter the Choice : ";
		cin>>ch1;
	}while(ch1==1);
			
		cout<<"Enter the Value to Search : ";
		cin>>key;
		struct node* temp=BST_Search(root,key);
		if(temp==NULL)
		cout<<"Value is n't present ";
		else 
		cout<<"Value is Present ";
		
}
