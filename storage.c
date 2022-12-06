#include<stdio.h>
int a=30;
void main()
{
	//int a=10;

	{
		int a=20;
		printf("\n value of a in block : %d",a);//20
	}
		printf("\n value of a : %d",a);//10
	getch();
}

