#include <stdio.h>

void main()
{
	int ch,a[10],n,x,i,j,temp,flag;
	
	printf("\nSearching Algorithms\n");
	printf("~~~~~~~~~ ~~~~~~~~~~");
	printf("\nEnter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the elts : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nMenu\n~~~~");
	printf("\n1.Binary Search");
	printf("\n2.Linear Search");
	printf("\n3.Exit");
	
	do
	{
		printf("\n\nEnter your choice : ");
		scanf("%d",&ch);
		printf("\n");
		
		switch(ch)
		{
			case 1: //binary search

					for(i=0;i<n;i++)
					{
						for(j=0;j<(n-i-1);j++)
						{
							if (a[j+1]<a[j])
							{
								temp = a[j];
								a[j]=a[j+1];
								a[j+1]=temp;
							}
						}
					}
				
					printf("Sorted array : ");
					for(i=0;i<n;i++)
					{
						printf("%d ",a[i]);
					}
					
					printf("\nEnter the elt to search : ");
					scanf("%d",&x);
					
					int first=0,last=n-1,mid;
					flag=0;
					while(first<=last)
					{
						mid=(first+last)/2;
						
						if(x==a[mid])
						{
							flag=1;
							printf("Elt %d found at position %d",x,mid+1);
							break;
						}
						else if (x>a[mid])
						{
							first=mid+1;
						}
						else
						{
							last=mid-1;
						}
					}
					break;
			
			case 2: //linear search
					printf("Array : ");
					for(i=0;i<n;i++)
					{
						printf("%d ",a[i]);
					} 
					printf("\nEnter the elt to search : ");
					scanf("%d",&x);
					flag=0;
					for(i=0;i<n;i++)
					{
						if(a[i]==x)
						{
							printf("Elt %d found at position %d",x,i+1);
							flag=1;
							break;
						}
					}
					break;
			
			case 3: 
					printf("Exiting...\n");
					break;
			
			default : 
					printf("Invalid choice\n");
					break;
		}
		
		if (flag==0)
		{
			printf("Elt %d is not found",x);	
		}
		
	}while(ch!=3);
	
}

