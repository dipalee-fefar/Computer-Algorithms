#include<stdio.h>
void main()
{
	int i,n;
	int sum=0;
	printf("Enter your Number :");
	scanf("%d",&n);
	 for (i=1;i<n;i++)
	 {
	 	sum=sum+i;
	 }
	 printf("Your sum of %d number is %d",n,sum);
}
