#include<stdio.h>
void main()
{
	int a[10];
	int i,n;
	printf("\n Enter array Size : ");
	scanf("%d",&n);
	printf("\n Enter array elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[0] < a[i])
		{
			a[0]=a[i];
		}
	}
	printf("\n Largest number is : %d",a[0]);
	getch();
}
