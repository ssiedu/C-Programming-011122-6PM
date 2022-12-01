#include<stdio.h>
float square();
void main()
{
	float res;
	res= square();
	printf("\n square of a number is : %.2f",res);
	getch();
}
float square()
{
	float num;
	printf("\n Enter any number : ");
	scanf("%f",&num);
	return num*num;
}
