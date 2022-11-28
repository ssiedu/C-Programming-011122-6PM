#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter Any Character : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'o':
		case 'u':
		case 'i':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Vowel");
			break;
		default :
			printf("Consonant");
	}
	getch();
}
