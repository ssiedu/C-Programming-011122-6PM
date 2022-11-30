#include<stdio.h>
void square();//function declaration
void cube();
void main()
{
	square();

}
void square()
{
	int n;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	printf("square of a number is : %d",n*n);
	cube();
}
void cube()
{
	int n;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	printf("square of a number is : %d",n*n*n);

}
