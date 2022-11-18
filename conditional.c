#include<stdio.h>
void main()
{
	int a,b,res;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	
	res= (a>b) ? a : b;
	
	printf("\n Greatest Number is : %d",res);
	getch();
}
