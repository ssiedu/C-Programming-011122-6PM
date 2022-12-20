#include<stdio.h>
void main()
{
	FILE *fp;
	int len;
	fp=fopen("Myfile1.txt","r");
	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	printf("length of file : %d",len);
	fclose(fp);
	getch();
	
}
