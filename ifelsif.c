#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter any Number : ");
	scanf("%d",&num);
	if(num%5==0 && num%7==0)
		printf("\n Number is divisible by 5 and 7");
	else if(num%7==0)
		printf("\n Number is divisible by 7");
	else if(num%5==0)
		printf("\n Number is divisible by both 5");
	else
		printf("\n Number is not divisible by 5 and 7");
	getch();
}
