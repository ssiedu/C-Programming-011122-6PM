#include<stdio.h>
void main()
{
	int a[5][5];
	int r,c,i,j;
	printf("\n Enter Row size : ");
	scanf("%d",&r);
	printf("\n Enter Column Size : ");
	scanf("%d",&c);
	
	printf("\n Enter Elements of Matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	getch();
}
