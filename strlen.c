#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	int len;
	printf("\n Enter string : ");
	gets(str1);
	len=strlen(str1);
	printf("\n string length : %d",len);
	getch();
}
