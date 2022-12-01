//function without argument and with return value
#include<stdio.h>
int Addition(); // function declaration
void main()
{
	int res;
	res=Addition();
	printf("\n Addition is : %d",res);
	getch();
}
int Addition()
{
	int x,y,z;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	z=x+y;
	return z;
}
