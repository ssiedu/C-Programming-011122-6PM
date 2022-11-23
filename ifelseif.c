#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any number : ");
	scanf("%d",&number);
	
	if(number==0)
	{
		printf("\n Number is Zero");
	}
	else if(number>0)
	{
		printf("\n Positive number");
	}
	else
	{
		printf("\n Negative Number");
	}
	
	getch();
}
