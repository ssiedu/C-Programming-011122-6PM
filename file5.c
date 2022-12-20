#include<stdio.h>
void main()
{
	FILE *fp;
	char text[20];
	fp=fopen("Myfile3.txt","w");
	fputs("Welcome to ssi",fp);
	fclose(fp);
	fp=fopen("Myfile3.txt","r");
	printf("%s",fgets(text,10,fp));
	fclose(fp);
	getch();
}
