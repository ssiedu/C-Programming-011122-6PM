#include<stdio.h>
void main()
{
	int a[5];
	int i;
	printf("\n Enter array Elements : \n");
	for(i=0;i<5;i++)
	{
		printf("\n a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n Array Elements : \n");
	for(i=0;i<5;i++)
	{
		printf("\n a[%d] : %d",i,a[i]);
	}
	getch();
}
