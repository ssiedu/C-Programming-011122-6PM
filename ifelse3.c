#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter any Number : ");
	scanf("%d",&number);
	
	if(number>=100 && number<=500)
		printf("Number in range ");
	else
		printf("Number out of range");
		
	getch();
}
