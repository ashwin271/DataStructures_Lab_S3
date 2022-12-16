#include <stdio.h>
void main()
{
	int ch,Q[20],R=-1,F=-1,x,y,n,i;	
	
	printf("\nEnter the size of the Queue : ");
	scanf("%d",&n);
	
	printf("\nMenu\n~~~~");
	printf("\n1.Insert");
	printf("\n2.Delete");
	printf("\n3.Display");
	printf("\n4.Exit\n");
	
	do
	{
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1: 
				if (R==n-1)
				{
				printf("Queue Overflow\n");
				}
				else
				{	
					R++;
					printf("Enter the elt : ");
					scanf("%d",&x);
					Q[R]=x;
					if(F==-1) F=0;
				}
				break;
				
			case 2: 
				if (F==-1)
				{
					printf("Queue Underflow\n");
				}
				else
				{
					y=Q[F];
					if(F==R)
					{
						F=-1;
						R=-1;
					}
					else F++;
					printf("The deleted elt is %d\n",y);
				}
				break;
				
			case 3: 
				if (F==-1)
				{
					printf("The Queue is empty\n");
				}
				else
				{	
					printf("Queue : ");
					for (i=F;i<=R;i++)
					{
						printf("%d ",Q[i]);
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
