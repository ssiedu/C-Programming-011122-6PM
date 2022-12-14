//function pointer
#include<stdio.h>
int addition(int *a, int *b);
void main()
{
	int x,y,res;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	res = addition(&x,&y);
	printf("\n addition is : %d",res);
	getch();
}
int addition(int *a, int *b)
{
	return *a + *b;
}
