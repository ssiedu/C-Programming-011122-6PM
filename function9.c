//function with argument and with return value
#include<stdio.h>
float Addition (int a ,float b);
void main()
{
	int x;
	float y,res;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%f",&y);
	
	res= Addition(x,y);
	printf("\n Addition is : %.2f",res);
	getch();
}
float Addition (int a,float b)
{
	return a+b;
}
