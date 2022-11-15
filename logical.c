#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter a : ");
	scanf("%d",&a);//10
	printf("\n Enter b : ");
	scanf("%d",&b);//40
	
	printf("\n And : %d",(a>b && a<=b));//0
	printf("\n OR  : %d",(a<b || a>=b) );//1
	printf("\n Not : %d",!(a>b));//1
	printf("\n AND NOT : %d ",(a<b && !(a==b)));//1
	printf("\n OR NOT  : %d",((a>b) || !(a<b)));//0
	getch();
}
