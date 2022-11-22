#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	
	if(num>0)
	  printf("\n Positive Number ");
	
	if(num<0)
	  printf("\n Negative Number ");
	  
	if(num==0)
	  printf("Zero");  
    getch();
}
