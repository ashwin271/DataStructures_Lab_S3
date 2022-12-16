#include <stdio.h>

void main()
{
	int ch1,ch2,Q[20],R=-1,F=-1,x,y,n,i,c;
	void menu();
	int choice();
	void invch();
	void iprdq();
	void oprdq();
	int input();
	
	printf("\nEnter the size of the Queue : ");
	scanf("%d",&n);
	
	menu();
	
	do
	{
		ch1=choice();
		
		switch(ch1)
		{
			case 1:
				iprdq();
				do
				{
					ch2=choice();
					
					switch(ch2)
					{
						case 1:					//insertion through rear
							if((R==n-1&&F==0)||F==R+1)
								printf("Queue Overflow");
							else
							{
								if(R==n-1)
								{
									R=0;;
								}
								else
								{
									R++;
								}
								if(F==-1)
								{
									F=0;
								}
								Q[F]=input();
							}
							break;
						
						case 2:					//deletion through front
							if(F==-1)
								printf("Queue Underflow");
							else
							{
								y=Q[F];
								if(F==R)
								{
									F=-1;
									R=-1;
								}
								else if(F==n-1)
								{
									F==0;
								}
								else
								{
									F++;
								}
								printf("The deleted elt is %d\n",y);
							}
							break;
							
						case 3:					//deletion through rear
							if(F==-1)
								printf("Queue Underflow");
							else
							{
								y=Q[R];
								if(F==R)
								{
									F=-1;
									R=-1;
								}
								else if(R==0)
								{
									R=n-1;
								}
								else
								{
									R=R-1;
								}
								printf("The deleted elt is %d\n",y);
							}
							break;

						case 4:					//display
							if (F==-1)
							{
								printf("The Queue is empty\n");
							}
							else
							{	
								printf("Queue : ");
								if (F>R)
								{
									for(i=F;i<n;i++)
										printf("%d ",Q[i]);
									for(i=0;i<=R;i++)
										printf("%d ",Q[i]);
								}
								else
								{
									for (i=F;i<=R;i++)
									{
										printf("%d ",Q[i]);
									}
								}
								printf("\n");
							}
							break;
							
						case 5: break;
						
						default : 
							invch();
							break;
					}
				}while(ch2!=5);
				break;
				
			case 2:
				oprdq();
				do
				{
					ch2=choice();
					
					switch(ch2)
					{
						case 1:					//insertion through front
							if((R==n-1&&F==0)||F==R+1)
								printf("Queue Overflow");
							else
							{
								if(F==-1||F==0)
								{
									F=n-1;
								}
								else
								{
									F=F-1;
								}
								if(R==-1)
								{
									R=n-1;
								}
								Q[F]=input();
							}
							break;
						
						case 2:					//insertion through rear
							if((R==n-1&&F==0)||F==R+1)
								printf("Queue Overflow");
							else
							{
								if(R==n-1)
								{
									R=0;;
								}
								else
								{
									R++;
								}
								if(F==-1)
								{
									F=0;
								}
								Q[F]=input();
							}
							break;
							
						case 3:					//deletion through front
							if(F==-1)
								printf("Queue Underflow");
							else
							{
								y=Q[F];
								if(F==R)
								{
									F=-1;
									R=-1;
								}
								else if(F==n-1)
								{
									F==0;
								}
								else
								{
									F++;
								}
								printf("The deleted elt is %d\n",y);
							}
							break;
							
						case 4:
							if (F==-1)
							{
								printf("The Queue is empty\n");
							}
							else
							{	
								printf("Queue : ");
								if (F>R)
								{
									for(i=F;i<n;i++)
										printf("%d ",Q[i]);
									for(i=0;i<=R;i++)
										printf("%d ",Q[i]);
								}
								else
								{
									for (i=F;i<=R;i++)
									{
										printf("%d ",Q[i]);
									}
								}
								printf("\n");
							}
							break;
							
						case 5: break;
						
						default : 
							invch();
							break;
					}
				}while(ch2!=5);
				break;
			
			case 3: break;
			
			default : 
				invch();
				break;
		}
	}while(ch1!=3);
}
	
void invch()
{
	printf("Invalid choice\n");
}

void menu()
{
	printf("\nMenu\n~~~~");
	printf("\n1.Input restricted DQ");
	printf("\n2.Output restricted DQ");
	printf("\n3.Exit\n");
}

int choice()
{
	int ch;
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	return ch;
}

void iprdq()
{
	printf("\nInput Restricted\n~~~~~ ~~~~~~~~~~");
	printf("\n1.Insertion through rear");
	printf("\n2.Deletion through front");
	printf("\n3.Deletion through rear");
	printf("\n4.Display");
	printf("\n5.Exit\n");	
}

void oprdq()
{
	printf("\nOutput Restricted\n~~~~~~ ~~~~~~~~~~");
	printf("\n1.Insertion through front");
	printf("\n2.Insertion through rear");
	printf("\n3.Deletion through front");
	printf("\n4.Display");
	printf("\n5.Exit\n");
}

int input()
{
	int a;
	printf("Enter the elt : ");
	scanf("%d",&a);
	return a;
}