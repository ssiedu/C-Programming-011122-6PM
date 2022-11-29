#include<stdio.h>
void main()
{
	int i;

	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			goto XYZ;//continue;//break;
		}
		printf("\t%d",i);
	
	}
	XYZ: printf("\n we use goto statement");
	getch();
}
