#include<stdio.h>
void main()
{
	int n,i;
	printf("\n Enter Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		printf("\t%d",i);
	}
	getch();
}
