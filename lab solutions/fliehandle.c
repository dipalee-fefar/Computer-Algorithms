#include<stdio.h>
void main()
{
	int i,n;
	FILE*f=fopen("filehandle.txt","w");
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter your element :");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)	
	{
		fprintf(f,"%d",arr[i]);
	}
}
