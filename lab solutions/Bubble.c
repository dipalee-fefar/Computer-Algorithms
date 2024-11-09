#include<stdio.h>
void main()
{
	int n,j,i,temp,flag;
	printf("Enter size of your array :");
	scanf("%d ",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter your element :");
		scanf("%d",&arr[i]);
	}
		//unsorted array
		printf("Unsorted array :");
		for(i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
		
		for(i=0;i<n-1;i++){
			flag=0;
			for(j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
				
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag++;
				}
			}
			if(flag==0)
			break;
		}
		
		//sorted array
		printf("Your sorted aaray :");
		for(i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		
		}
}
