#include<stdio.h>
void main()
{
	int a=5;
	a+=10;//a=15
	printf("\n value of a : %d",a);
	a-=5;
	printf("\n value of a : %d",a);//0
	a*=3;
	printf("\n value of a : %d",a);//30
	a/=2;
	printf("\n value of a : %d",a);//15
	a%=2;
	printf("\n value of a : %d",a);//1
	getch();
	
}
