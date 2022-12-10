#include<stdio.h>
void main()
{
	int *iptr;
	float *fptr;
	char *cptr;
	void *ptr;
	
	printf("\n integer pointer : %d",sizeof(iptr));
	printf("\n float pointer : %d",sizeof(fptr));
	printf("\n character pointer : %d",sizeof(cptr));
	printf("\n void pointer : %d",sizeof(ptr));
	
	getch();	
}
