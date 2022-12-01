#include<stdio.h>
void square(int n);
void main()
{
	int num;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	square(num);
	getch();
}
void square(int n)
{
	printf("\n square of a number is : %d",n*n);
}
