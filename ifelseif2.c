#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n Enter First Number : ");
	scanf("%d",&a);
	printf("\n Enter Second Number : ");
	scanf("%d",&b);
	printf("\n Enter Third Number : ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("\n %d is greater than %d and %d",a,b,c);
	}
	else if(b>c)
	{
		printf("\n %d is greater than %d and %d",b,a,c);
	}
	else
	{
		printf("\n %d is greater than %d and %d ",c,a,b);
	}
	getch();
}
