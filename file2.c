#include<stdio.h>
void main()
{
	FILE *fp;
	char text[30];
	fp=fopen("Myfile1.txt","w");
	fprintf(fp,"Welcome to ssi digital");
	fclose(fp);
	fp=fopen("Myfile1.txt","r");
	while((fscanf(fp,"%s",text))!=EOF)
	{
		printf("%s",text);
	}
	fclose(fp);
	getch();
}
