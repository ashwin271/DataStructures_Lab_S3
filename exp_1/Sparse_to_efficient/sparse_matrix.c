#include <stdio.h>
void main()
{
	int a[10][10],b[10][10],n,r,c,i,j,nonz=0,k;
	printf("Enter the no of rows and cols : \n");
	scanf("%d%d",&r,&c);
	printf("\nEnter the elts : \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]!=0)
				nonz++;
		}
		
	//Displaying input matrix
	printf("\nInput Matrix : \n");
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf(" %d ",a[i][j]);
			}
			printf("\n");
		}
		
	//Checking whether sparse matrix
	if(nonz>((r*c)/2))
	{
		printf("\nThe matrix is not a Sparse Matrix.");
	}
	else
	{
		printf("\nThe matrix is a Sparse Matrix.\n");
		
		//Creating effecient matrix
		k=1;
		b[0][0] = r;
		b[0][1] = c;
		b[0][2] = nonz;
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
			{
				if(a[i][j]!=0)
				{
					b[k][0]=i;
					b[k][1]=j;
					b[k][2]=a[i][j];
					k++;
				}
			}

		//Displaying effecient matrix
		printf("\nEffecient Matrix : \n");
		for(i=0;i<=nonz;i++)
		{
			for(j=0;j<3;j++)
			{
				printf(" %d ",b[i][j]);
			}
			printf("\n");
		}
	}
}
