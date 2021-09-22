**********positive & negative program******************
#include<stdio.h>
main()
{
	int num;
	printf("\t\tPROGRAM FOR KNOWING EITHER IT's POSITIVE OR NEGATIVE");
	printf("\n\nEnter any number=");
	scanf("%d",&num);
	if (num>0)
	{
		printf("%d is a positive number\n",num);
		
	}	
	else if (num<0)
	{
		printf("%d is a negative number\n",num);
		
	}
	else
	{
	printf("The number is 0");	
	}
	return 0;
}

