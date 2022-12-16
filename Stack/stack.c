#include <stdio.h>
void main()
{
	int ch,s[20],top=-1,x,y,n,i;	
	
	printf("\nEnter the size of the Stack : ");
	scanf("%d",&n);
	
	printf("\nMenu\n~~~~");
	printf("\n1.Push");
	printf("\n2.Pop");
	printf("\n3.Display");
	printf("\n4.Exit\n");
	
	do
	{
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1: 
				if (top==n-1)
				{
				printf("Stack Overflow\n");
				}
				else
				{	
					printf("Enter the elt : ");
					scanf("%d",&x);
					top++;
					s[top]=x;	
				}
				break;
				
			case 2: 
				if (top==-1)
				{
					printf("Stack Underflow\n");
				}
				else
				{
					y=s[top];
					printf("The poped elt is %d\n",y);
					top--;
				}
				break;
				
			case 3: 
				if (top==-1)
				{
					printf("The stack is empty\n");
				}
				else
				{	
					printf("Stack : ");
					for (i=top;i>=0;i--)
					{
						printf("%d ",s[i]);
					}
					printf("\n");
				}
				break;
				
			case 4: break;
			
			default: 
				printf("Invalid choice\n");
				break; 
		}
	}while(ch!=4);
}
