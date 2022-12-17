#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\n Enter String : ");
	gets(str1);
	strcpy(str2,str1);
	printf("\n Str2 is : %s",str2);
	getch();
}
