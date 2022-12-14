#include<stdio.h>
void main()
{
	int a=1,b=2;
	int *ptr1=&a;
	int *ptr2 = &b;
	printf("\n value of ptr1 : %u",ptr1);
	printf("\n value of ptr2 : %u",ptr2);
	ptr1=ptr1-ptr2;//new_address = (current_address1- address 2)/sizeof(datatype)
	printf("\n value of ptr1 : %u",ptr1);
	printf("\n value of ptr2 : %u",ptr2);
	getch();
}
