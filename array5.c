#include<stdio.h>
void main()
{
	int a[100];
	int i,n;
	printf("\n How many Elements do u want to enter : ");
	scanf("%d",&n);
	printf("\n Enter array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] : %d",i,a[i]);
	}
	getch();
}
