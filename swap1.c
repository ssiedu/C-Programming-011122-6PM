#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	/*a=a+b;//a=10+20  a=30
	b=a-b;// b= 30-20=10
	a=a-b;// a=30-10=20*/
	
	/*a=a*b;
	b=a/b;
	a=a/b;*/
	
	a=a^b;
	b=a^b;
	a=a^b;
	
	
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
	getch();
}
