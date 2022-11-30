//function without argument and without return value 
#include<stdio.h>
void Addition();//function declaration
void main()
{
	
	Addition();// function call
	Addition();// function call
	Addition();// function call
	getch();
}
void Addition()
{
	int a,b,sum;
	printf("\n Enter First value : ");
	scanf("%d",&a);
	printf("\n Enter Second Value : ");
	scanf("%d",&b);
	sum=a+b;
	printf("\n Addition is : %d",sum);
}

