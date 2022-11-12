#include<stdio.h>
int a=20;//global variable
void main()
{
	int a=10;//local variable
	{
		//int a=5;//local for block
		printf("\n value of a in block : %d",a);
	}
	printf("\n value of a : %d",a);
	getch();
}
