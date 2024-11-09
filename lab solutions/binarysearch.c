#include<stdio.h>
void main()
{
	int i,j,n,key,temp,mid,high,low;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("Enter Element in array: ");
		scanf("%d",&arr[i]);
	}
	low=0,high=n-1;mid=(high+low)/2;
	
	printf("Enter search element of array : ");
	scanf("%d",&key);
	
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			printf("%d",mid);
			temp=1;
			break;
		}
		else if (key<arr[mid]){
			high=mid-1;
		}
		else if(key>arr[mid]){
			low=mid+1;
			
		}
		else{
			printf("Element not found");
		}
	}
}
