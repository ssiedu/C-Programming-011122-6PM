#include<stdio.h>
void main()
{
	int a,b,c,res;
	printf("\n Enter First Number : ");
	scanf("%d",&a);
	printf("\n Enter Second Number : ");
	scanf("%d",&b);
	printf("\n Enter Third Number : ");
	scanf("%d",&c);
	
	res=(a>b && a>c) ? a : (b>c) ? b: c;
	
	printf("\n Largest number is : %d",res);
	getch();
}
