#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,*ptr,sum=0;
	printf("\n Enter Number of Elements : ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("\n sorry! unable to allocate memory ");
		exit(0);
	}
	printf("\n Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum = sum+*(ptr+i);
	}
	printf("\n sum of array elements : %d",sum);
	free(ptr);
	getch();
}
