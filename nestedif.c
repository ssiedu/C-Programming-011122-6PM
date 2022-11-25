#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter First Number : ");
	scanf("%d",&a);
	printf("\n Enter Second Number : ");
	scanf("%d",&b);
	if(a!=b)
	{
		printf("\n a is not equal too b ");
		if(a>b)
			printf("\n a is greater than b");
		else
			printf("\n b is greater than a");
	}
	else
		printf("a is equal too b ");
}
