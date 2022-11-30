#include<stdio.h>
void Hello();  //function declaration
void main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		Hello();   //function call
	}
	getch();
}
void Hello()         // function definition
{
	printf("\n Hello1");
	printf("\n Hello2");
	printf("\n Hello3");
	printf("\n Hello4");
	printf("\n Hello5");

}
