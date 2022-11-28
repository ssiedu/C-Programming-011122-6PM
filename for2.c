#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter any Number : ");
	scanf("%d",&n);
	printf("\n Enter start value : ");
	scanf("%d",&s);
	printf("\n Natural Numbers : \n");
	for(i=s;i<=n;i=i+1)
	{
		printf("\t%d",i);
	}
	getch();
}
