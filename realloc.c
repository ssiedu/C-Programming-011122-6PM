#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,*ptr,i;
	printf("\n Enter array size : ");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("\n address of previous allocation of memory : \n");
	for(i=0;i<n1;i++)
	{
		printf("\n%u",(ptr+i));
	}
	printf("\n Enter new array size : ");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2*sizeof(int));
	printf("\n New address allocation of memory : \n");
	for(i=0;i<n2;i++)
	{
		printf("\n%u",(ptr+i));
	}
	free(ptr);
	getch();
}
