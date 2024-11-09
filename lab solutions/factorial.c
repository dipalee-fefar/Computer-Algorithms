#include<stdio.h>
void main()
{
	int n;
	int fact=1;
	
	printf("Enter the Number \n");
	scanf("%d",&n);
	
	while(n)
	{
		fact=fact*n;
		n=n--;
	}
	printf("factorial :%d",fact);
}
