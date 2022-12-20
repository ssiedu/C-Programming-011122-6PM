#include<stdio.h>
void main()
{
	FILE *fp;
	int i;
	int r;
	fp=fopen("Myfile5.txt","w");
	for(i=1;i<=10;i++)
		putw(i,fp);
	fclose(fp);
	fp=fopen("Myfile5.txt","r");
	for(i=1;i<=10;i++)
	{
		r=getw(fp);
		printf("\t%d",r);
	}

	fclose(fp);
	getch();
}
