#include<stdio.h>
void main(){
	float weight[20],profit[20],capacity,ratio[20],temp,x[20],tp=0;
	int n,u,i,j;
	printf("Enter number of object:");
	scanf("%d",&n);
	printf("Enter the weight & profit of each object: ");
	for(i=0;i<n;i++){
		scanf("%f %f",&weight[i],&profit[i]);
	}
	printf("Enter max capacity : ");
	scanf("%f", &capacity);
	for (i=0;i<n;i++){
		ratio[i]=profit[i]/weight[i];
	}
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if(ratio[i]<ratio[j]){
				temp=ratio[j];
				ratio[j]=ratio[i];
				ratio[i]=temp;
				
				temp=weight[j];
				weight[j]=weight[i];
				weight[i]=temp;
				
				temp=profit[j];
				profit[j]=profit[i];
				profit[i]=temp;
			}
		}
	}
	u=capacity;
	for(i=0;i<n;i++){
		x[i]=0.0;
	}
	for(i=0;i<n;i++){
		if(weight[i]>u){
			break;
		}
		else{
			x[i]=1.0;
			tp=tp+profit[i];
			u=u+weight[i];
		}
	}
	if(i<n){
		x[i]=u/weight[i];
	}
	tp=tp+(x[i]*profit[i]);
	printf("\n weight");
	for (i=0;i<n;i++){
		printf("%f\t", weight[i]);
	}
	printf("\n value: ");
	for(i=0;i<n;i++){
		printf("%f\t ",profit[i]);
	}
	printf("\nx: ");
	for(i=0;i<n;i++){
		printf("%f\t",x[i]);

	}
	printf("Max value: %f ",tp);
}
