#include<stdio.h>
void main()
{
	int num=10;
	int *ptr=&num;
	printf("\n value of ptr : %u",ptr);
	//ptr++;//new_address = current_add + i *sizeof(datatype)
	//++ptr;
	ptr--;
	printf("\n value of ptr : %u",ptr);
	getch();
}
