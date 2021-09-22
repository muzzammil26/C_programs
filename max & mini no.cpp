**********MAX & MIN NUMBER******************
#include<stdio.h>
main()
{
	int n1,n2,n3,n4,n5;
	printf("\t\tPROGRAM FOR KNOWING MAX & MIN NUMBER\n");
	printf("Enter any number=");
	scanf("%d",&n1);
	printf("Enter any number=");
	scanf("%d",&n2);
	printf("Enter any number=");
	scanf("%d",&n3);
	printf("Enter any number=");
	scanf("%d",&n4);
	printf("Enter any number=");
	scanf("%d",&n5);
	
	if(n1>n2&&n1>n3&&n1>n4&&n1>n5)
	{
		printf("%d is greater\n",n1);
	}
else if(n2>n1&&n2>n3&&n2>n4&&n2>n5)
	{
		printf("%d is greater\n",n2);
	}
else if(n3>n2&&n3>n1&&n3>n4&&n3>n5)
	{
		printf("%d is greater\n",n3);
	}
else if(n4>n2&&n4>n3&&n4>n1&&n4>n5)
	{
		printf("%d is greater\n",n4);
	}
 else if(n5>n2&&n5>n3&&n5>n4&&n5>n1)
	{
		printf("%d is greater\n",n5);
	}
if(n1<n2&&n1<n3&&n1<n4&&n1<n5)
	{
		printf("%d is Smallest\n",n1);
	}
else if(n2<n1&&n2<n3&&n2<n4&&n2<n5)
	{
		printf("%d is Smallest\n",n2);
	}
else if(n3<n2&&n3<n1&&n3<n4&&n3<n5)
	{
		printf("%d is Smallest\n",n3);
	}
else if(n4<n2&&n4<n3&&n4<n1&&n4<n5)
	{
		printf("%d is Smallest\n",n4);
	}
 else if(n5<n2&&n5<n3&&n5<n4&&n5<n1)
	{
		printf("%d is Smallest\n",n5);
	}
}

