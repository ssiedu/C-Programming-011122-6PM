#include<stdio.h>
void main()
{
	int num=50;
	int *ptr;
	ptr=&num;
	printf("\n value of num : %d",num);
	printf("\n address of num : %u",&num);
	printf("\n address of num : %p",&num);
	printf("\n address of num : %x",&num);
	printf("\n value of ptr : %u",ptr);
	printf("\n value of ptr : %p",ptr);
	printf("\n value of ptr : %x",ptr);
	printf("\n value of num using ptr : %d",*ptr);
	getch();
}
