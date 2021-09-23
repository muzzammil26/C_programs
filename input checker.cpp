#include<stdio.h>
main()
{
	char ch;
	printf("Enter any character or num or special char=");
	ch=getchar();
	if ((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("%c is a character",ch);
	}

	else if(ch>='0'&&ch<='9999999')
	{
		printf("%c is an integer",ch);
	}
	else
	{
		printf("%c is a special character",ch);
	}



}



