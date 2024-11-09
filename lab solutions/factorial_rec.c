#include<stdio.h>

int fact(int);
void main()
{
	int i,n;
	printf("Enter n Number : ");
	scanf("%d",&n);
	
	printf("Factorial of %d is %d",n,fact(n));	
}
int fact(int i)
{
	if(i<=1)
	{
		return 1;
	}
	else
	{
		return i*fact(i-1);
	}
}
