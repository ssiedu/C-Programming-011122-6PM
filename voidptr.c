#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	void *ptr;
	
	ptr=&i;
	i=10;
	printf("\n value of i : %d",i);//10
	printf("\n value of iptr : %d",*(int*)ptr);//10
	
	ptr=&f;
	f=12.33;
	printf("\n value of f : %.2f",f);//12.33
	printf("\n value of fptr : %.2f",*(float*)ptr);//12.33
	
	ptr=&c;
	c='A';
	printf("\n value of c : %c",c);//A
	printf("\n value of cptr : %c",*(char*)ptr);//A
	
	
	getch();
}
