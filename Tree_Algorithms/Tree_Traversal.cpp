#include<bits/stdc++.h>
using namespace std;
int cnt=0;
struct node
{
	int data;
	struct node *left,*right;
};
struct node *createNode(int item)
{
	struct node *newnode =(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node* insert(struct node* temp,int item)
{	cnt++;
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
void Pre_Order(node *root)
{
	if(root!=NULL)
	{	cout<<root->data<<" ";
		Pre_Order(root->left);
		Pre_Order(root->right);
		
	}
}
void Post_Order(node* root)
{
	if(root!=NULL)
	{
		Post_Order(root->left);
		Post_Order(root->right);
		cout<<root->data<<" ";
	}
}
void In_Order(node* root)
{
	if(root!=NULL)
	{
		In_Order(root->left);
		cout<<root->data<<" ";
		In_Order(root->right);
	}
}
int main()
{	int ch1,data;
	struct node *root=NULL;
	cout<<"Enter the data : ";
	cin>>data;
	
	root=insert(root,data);
	do
	{	
		cout<<"Enter the data : ";
		cin>>data;	
		insert(root,data);
		cout<<"Enter the Choice : ";
		cin>>ch1;
	}while(ch1==1);
	cout<<"Preorder Traversal  : ";Pre_Order(root);cout<<endl;
	cout<<"Postorder Traversal : ";Post_Order(root);cout<<endl;
	cout<<"InOrder Traversal   : ";In_Order(root);cout<<endl;
			
}
