#include <stdio.h>

void main()
{
	struct node
	{
		int info;
		struct node *lptr;
		struct node *rptr;
	};
	
	int ch,D;
	
	
	//value insert 
	printf("Enter the no of values to insert into the binary tree
	
	printf("Binary Search Tree\n");
	printf("~~~~~~ ~~~~~~ ~~~~\n");
	printf("1. Insert a node\n");
	printf("2. Delete a node\n");
	printf("3. Preorder Traversal\n");
	printf("4. Inorder Traversal\n");
	printf("5. Postorder Traversal\n");
	printf("6. Exit\n");
	
	do
	{
		printf("Enter your choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: //node insert
					printf("Enter the elt : ");
					scanf("%d",&D);
					
					newnode=(struct node*)malloc(sizeof(struct node));
					
					newnode->info=D;
					newnode->lptr=NULL;
					newnode->rptr=NULL;
					
					if(root==NULL)
					{
						root=newnode;
					}
					else
					{
						prev=NULL;
						curr=root
					}
					
		}
	}while(ch!=6);
}
