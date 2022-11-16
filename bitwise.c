#include<stdio.h>
void main()
{
	int x=40,y=80;
	printf("\n Bitwise And        : %d",x&y);
	printf("\n Bitwise Or         : %d",x|y);
	printf("\n Bitwise Not        : %d",~x);
	printf("\n Bitwise Xor        : %d",x^y);
	printf("\n Bitwise leftshift  : %d",x<<1);
	printf("\n Bitwise rightshift : %d",x>>1);
	
	getch();
}
