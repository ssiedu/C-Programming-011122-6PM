#include<stdio.h>
void main()
{
	int num=100;
	int *ptr=&num;
	int **pptr = &ptr;
	int ***ppptr = &pptr;
	int ****pppptr = &ppptr;
	
	printf("\n address of num is : %u",&num);
	printf("\n value of ptr : %u",ptr);
	printf("\n value of num using ptr : %d",*ptr);
	printf("\n value of num using pptr : %d",**pptr);
	printf("\n value of num using ppptr : %d",***ppptr);
	printf("\n value of num using pppptr : %d",****pppptr);
	getch();
}
