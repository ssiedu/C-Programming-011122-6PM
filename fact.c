#include<stdio.h>
void main()
{
	int n,fact=1,i;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)//5
	{
		fact= fact*i;//fact =1*1=1//fact =1*2=2//fact=2*3=6//fact=6*4=24//fact 24*5=120
	
	}
	printf("\n factorial is : %d",fact);
	getch();
	
}
