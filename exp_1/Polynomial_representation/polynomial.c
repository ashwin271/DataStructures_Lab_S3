#include <stdio.h>
void main()
{
	struct Polynomial
	{
		int coeff;
		int expo;
	}P[10];
	int n,i;
	printf("Enter the no of terms in the polynomial : ");
	scanf("%d",&n);
	printf("Enter the terms : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&P[i].coeff,&P[i].expo);
	}
	printf("\nPolynomial : ");
	for(i=0;i<n;i++)
	{
		printf("%dx^%d",P[i].coeff,P[i].expo);
		if(i!=n-1)
		{
			printf("+");
		}
	}
}
