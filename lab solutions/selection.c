#include<stdio.h>
void selection(int n, int a[])
{
	int i,j,minx,minj;
		for(i=0;i<n-1;i++)
		{
			minj=i;
			minx=a[i];
			
			for(j=i+1;j<n;j++)
			{
				if(a[j]<minx)
				{
					minj=j;
					minx=a[j];
				}
			}
			if(i!=minj)
			{
				a[minj]=a[i];
				a[i]=minx;
			}
		}
		
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
}
void insertion(int n,int a[])
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		j=i-1;
		while(a[j]>key && j>=0){
		
			a[j+1]=a[j];
			j=j-1;
			
		}
		a[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

void main()
{
	int n,i;
	printf("Enter size of your array :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Element : ");
		scanf("%d",&a[i]);
	}
	selection(n,a);
	insertion(n,a);
}
