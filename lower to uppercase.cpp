#include<stdio.h>
main()
{
	char ch;
	printf("Enter any alphabet = ");
	ch=getchar();
	if (ch>='a'&&ch<='z')
	{
		printf("%c>='A'&&%c<=='Z'",ch,ch);
	}
	else if (ch>='A'&&ch<='z')
	{
		printf("%c is a UpperCase",ch);
	}
}
