// ********it will check either letter is vowel or not*********
#include<stdio.h>
main()
{
	
	char ch,a,e,i,o,u;
	printf("Enter a letter here=");
	ch=getchar();
	if (ch=='a'||ch=='i'||ch=='o'||ch=='o'||ch=='e')
	{
		printf("%c is a vowel\n",ch);
	
	}
	
	else
	{
		printf("%c is not a vowel\n",ch);
	}
	
}

