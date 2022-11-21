#include<stdio.h>
void main()
{
	int x=5,y;
	//y=++x;
	//y=x++;
	//y=--x;
	y=x--;
	printf("\n value of x : %d",x);//3//3//4//4
	printf("\n value of y : %d",y);//3//2//4//5
	getch();
}
