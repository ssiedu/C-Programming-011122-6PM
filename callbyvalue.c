#include<stdio.h>
void swap(int a, int b);//function declaration
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	
	swap(x,y);
	printf("\n After function call :\n");
	printf("\n value of x : %d",x);
	printf("\n value of y : %d",y);
	getch();
}
void swap(int a, int b)
{
	int temp =a;
	a=b;
	b=temp;
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
}

