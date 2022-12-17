#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\n Enter First String : ");
	gets(str1);
	printf("\n Enter Second String : ");
	gets(str2);
	strcat(str2,str1);
	printf("\n string concatinate : %s",str2);
	getch();
}
