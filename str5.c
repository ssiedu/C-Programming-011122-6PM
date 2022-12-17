#include<stdio.h>
void main()
{
	char str1[20];
	printf("\n Enter String : ");
	scanf("%[^\n]s",str1);
	printf("\n String is : %s",str1);
	getch();
}
