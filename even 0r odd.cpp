*************Even odd program****************
#include<stdio.h>
main()
{
	
	int ans,num;
	printf("\t\tPROGRAM FOR KNOWING EITHER IT's EVEN OR ODD");
	printf("\n\nEnter any number=");
	scanf("%d",&num);
	ans=num%2;
	if (ans==0)
	{
		printf("%d is a even number\n",num);
		
	}	
	else if (ans!=0)
	{
		printf("%d is a odd number\n",num);
		
	}
		return 0;
}

