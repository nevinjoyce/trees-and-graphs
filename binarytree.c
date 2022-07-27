/* Binary Tree */
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newNode(int val)
{
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=val;
	new->left=NULL;
	new->right=NULL;
	return(new);
}
void preorder(struct node *root)
{
	if(root==NULL)
		return;
	printf("%d\t",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d\t",root->data);
	inorder(root->right);
}
void postorder(struct node *root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d\t",root->data);
}
void main()
{
	int ch;
	struct node *root;
	root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	root->right->left=newNode(6);
	root->right->right=newNode(7);
	while(1)
	{
		printf("\nTraversal Options:\n1. Preorder\n2. Inorder\n3. Postorder\n4. Exit\nEnter your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("\n");
				preorder(root);
				printf("\n");
				break;
			}
			case 2:
			{
				printf("\n");
				inorder(root);
				printf("\n");
				break;
			}
			case 3:
			{	
				printf("\n");
				postorder(root);
				printf("\n");
				break;
			}
			case 4:
			{
				exit(0);
			}
			default:
			{
				printf("\nInvalid Choice\n");
			}
		}
	}
}			
