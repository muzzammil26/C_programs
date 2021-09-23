#include<stdio.h>
main()
{
	float num1;
	printf("Program to check Either number is divisible by 5&11 or not");
	printf("Enter any number=");
	scanf("%f",&num1);
	if (num1 % 5.000==0.00)
	{
		printf("%.2f is divisible by 5",num1);
	}
	else if(num1%11.0==0)
	{
		printf("%.2f is divisible by 11",num1);
		
	}
	else
	{
		printf("%.2f is not divisible by 5 and 11",num1);
	}
}
