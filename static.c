#include<stdio.h>
void Demo();
void main()
{
	Demo();
	Demo();
	Demo();
	getch();
}
void Demo()
{
	static int a=0;
	printf("\n value of a : %d",a);
	a++;
}
