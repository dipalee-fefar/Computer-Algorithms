#include<stdio.h>
void main()
{
	int i,j,n,a[];
	
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Element : ");
		scanf("%d",&a[i]);
	}
	mergesort(a[],0,n-1)
	{
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Element : ");
		scanf("%d",a[i]);
	}
}
}
void mergesort(int a[],int lb, int ub)
{
	if(lb<ub)
	{
		int mid=(lb=ub)/2;
		mergesort(a,lb,mid)
		mergesort(a,mid,ub)
		mergesort(a,lb,mid,ub)
	}
}
void merge(int a[],int lb,int mid,int ub)
{
	int n1=mid-lb+1;
	int n2=ub-mid;
	
	int l[n1],r[n2];
	int i,j,k;
	
	for(i=0;i<n1;i++)
	{
		l[i]=a[lb+1];
	}
	for(j=0;j<n2;j++)
	{
		r[j]=a[mid+1+j];
	}
	i=0,j=0;k=lb;
	
	while(i<n1 && j<n2)
	{
		if(l[i<r[j]])
		{
			a[k]=l[i];
			k++;
			i++;
		}
		else{
			a[k]=r[j];
			k++;
			j++;
		}
	}
	
	while(i<n1)
	{
		a[k]=l[i];
		i++;
		k++;
	}
	
	while(j<n2)
	{
		a[k]=r[j];
		k++;
		j++;
	}
}
