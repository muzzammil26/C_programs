#include<stdio.h>
main()
{
	char ch;
	printf("Enter any alphabet = ");
	ch=getchar();
	if (ch>='a'&&ch<='z')
	{
		printf("%c is a LowerCase",ch);
	}
	else if (ch>='A'&&ch<='Z')
	{
		printf("%c is a UpperCase",ch);
	}
}
