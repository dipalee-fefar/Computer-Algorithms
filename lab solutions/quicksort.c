#include<stdio.h>

void quick(int arr[],int lb, int ub){

int pivot , i, j ,temp;
if(lb<ub){
	pivot=1;
	i=lb+1;
	j=ub+1;
	
	while(i<j){
		while(arr[i]<=arr[pivot] && i<ub){
			i++;
		}
		while(arr[j]>arr[pivot]){
			j--;
		}
		if(i<j){
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
	temp=arr[j];
	arr[j]=arr[pivot];
	arr[pivot]=temp;
	
	quick(arr,lb,j-1);
	quick(arr,j+1,ub);
}
}

void main()
{
	int i,j,n,key,temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter Element in array: ");
		scanf("%d",&arr[i]);
	}
	quick(arr,0,n-1);
	printf("Sorted array is :");
	for(i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
}

