#include <stdio.h>
#include <stdlib.h>
void main()
{
	int ch,c,x,y,s;
	int choice();
	void menu();
	void insert();
	void delete();
	
	struct node
	{
		int info;
		struct node *link;
	};
	
	struct node *start=NULL,*ptr=NULL,*newnode=NULL,*prev;
	
	menu();
	
	do
	{
		ch=choice();
		
		switch(ch)
		{
			//insert
			case 1:	//front
					printf("Enter the elt to insert : ");
					scanf("%d",&x);
		
					newnode=(struct node*)malloc(sizeof(struct node));
					newnode->info=x;
					newnode->link=NULL;
								
					newnode->link=start;
					start=newnode;
					break;
					
			case 2: //rear
					printf("Enter the elt to insert : ");
					scanf("%d",&x);
					
					newnode=(struct node*)malloc(sizeof(struct node));
					newnode->info=x;
					newnode->link=NULL;
		
					if(start==NULL)
					{
						start=newnode;
						ptr=newnode;
					}
					else
					{
						ptr->link=newnode;
						ptr=newnode;
					}
					break;
					
			case 3: //mid
					printf("Enter where to insert : ");		
					scanf("%d",&s);
					ptr=start;				
					while (ptr->info!=s)
					{
						if(ptr->link==NULL)
						{
							break;
						}
						ptr=ptr->link;
					}
					if(ptr->info==s)
					{
						printf("Enter the elt to insert : ");
						scanf("%d",&x);
						
						newnode=(struct node*)malloc(sizeof(struct node));
						newnode->info=x;
						newnode->link=NULL;		
						
						newnode->link=ptr->link;
						ptr->link=newnode;						
					}
					else if(ptr->link==NULL)
					{	
						printf("\nEntered elt is not found\n");
						printf("No elt is inserted\n");
					}
					break;
					
			//delete		
			case 4: //front
					y=start->info;
					start=start->link;
					printf("Deleted elt : %d\n",y);
					break;
					
			case 5: //rear
					ptr=start;
					prev=NULL;
					while(ptr->link!=NULL)
					{
						prev=ptr;
						ptr=ptr->link;
					}
					prev->link=NULL;
					y=ptr->info;
					printf("Deleted elt : %d\n",y);
					break;
					
			case 6: //mid
					printf("Enter the elt to delete: ");
					scanf("%d",&s);
					ptr=start;
					prev=NULL;
								
					while (ptr->info!=s)
					{
						if(ptr->link==NULL)
						{
							break;
						}
						prev=ptr;
						ptr=ptr->link;
					}
					if(ptr->info==s)
					{
						prev->link=ptr->link;
						printf("Elt %d is deleted\n",ptr->info);
					}
					else if(ptr->link==NULL)
					{	
						printf("\nEntered elt is not found\n");
						printf("No elt is deleted\n");
					}
					break;
			
			//display
			case 7: 
					ptr=start;
					printf("List : ");
					while(ptr->link!=NULL)
					{
						printf("%d ",ptr->info);
						ptr=ptr->link;
					}
					printf("%d\n",ptr->info);
					break;
			
			//exit
			case 8: 
					printf("Exiting...\n");
					break;
			
			default : 
					printf("\nInvalid choice");
					break;
		}
	}while(ch!=8);
	
}

int choice()
{
	int ch;
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	return ch;
}

void menu()
{
	printf("\nMenu\n~~~~");
	printf("\n1.Insert from front");
	printf("\n2.Insert from rear");
	printf("\n3.Insert after an elt");
	printf("\n4.Delete from front");
	printf("\n5.Delete from rear");
	printf("\n6.Delete a specified elt");
	printf("\n7.Display");
	printf("\n8.Exit\n");
}
