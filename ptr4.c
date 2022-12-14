#include<stdio.h>
void main()
{
	int a=11;
	int *ptr=&a;
	printf("\n value of ptr : %u",ptr);
	//ptr=ptr+3;
	ptr=ptr-5;
	printf("\n value of ptr : %u",ptr);
	getch();
}
