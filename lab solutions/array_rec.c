#include<stdio.h>
void main()
{
	int a[100];
	int n,i;
	printf("enter a number:");
	scanf("%d",&n);
	
	for( i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array is:");
	printf("\n");
	for( i=0;i<=n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
}

