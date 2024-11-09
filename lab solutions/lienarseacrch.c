#include<stdio.h>
void main()
{
	int i,j,n,key,arr[100],temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++){
		printf("Enter Element in array: ");
		scanf("%d",&arr[i]);
	}
	printf("Enter search element of array : ");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(arr[i]==key){
			temp=1;
			break;
		}
		else{
			temp=0;
		}
	}
	
	if(temp==0){
		printf("No element:");
	}
	else{
		printf("Your element is here: ");
	}
}
