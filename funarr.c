#include<stdio.h>
void getarray(int a[]);
void main()
{
	int arr[5]={11,22,33,44,55};
	getarray(arr);
	getch();
}
void getarray(int a[5])
{
	int i;
	printf("\n Array Elements :\n");
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
}
