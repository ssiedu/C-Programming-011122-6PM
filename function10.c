#include<stdio.h>
int square(int n);
void main()
{
	int num,res;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	res=square(num);
	printf("\n square is : %d",res);
	getch();
}
int square(int n)
{
	return n*n;
}
