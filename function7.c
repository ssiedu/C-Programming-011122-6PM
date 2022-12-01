//function with argument and without return value
#include<stdio.h>
void Addition(int a, int b,int c);// formal argument 
void main()
{
	int a,b,c;//actual argument
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n Enter the value of c : ");
	scanf("%d",&c);
	
	Addition(a,b,c);
	
	getch();
}

void Addition(int a, int b, int c)
{
	printf("\n Addition is : %d",a+b+c);
}


