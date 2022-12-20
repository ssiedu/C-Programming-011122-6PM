#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("add.c","r");
	while(1)
	{
		ch=getc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
