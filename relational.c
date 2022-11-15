#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	
	printf("\n Greater than          : %d",a>b);
	printf("\n Less Than             : %d",a<b);
	printf("\n Greater than Equal to : %d",a>=b);
	printf("\n Less than Equal to    : %d",a<=b);
	printf("\n Equal to              : %d",a==b);
	printf("\n Not Equal to          : %d",a!=b);
	
	getch();
}
