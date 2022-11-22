#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter First Number : ");
	scanf("%d",&a);
	printf("\n Enter Second Number : ");
	scanf("%d",&b);
	if(a>b)
	 printf("\n %d is greater than %d ",a,b);
	 
	else
	  printf("\n %d is greater than %d",b,a);
	  
	getch();
}
