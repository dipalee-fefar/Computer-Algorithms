#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
FILE *f1 = fopen("BBest.txt","w");
	int i;
	for(i = 1 ; i <= 100000 ; i++){
		fprintf(f1,"%d\n",i);
	} 
	fclose(f1);
	FILE *f2 = fopen("BWorst.txt","w");
	for(i = 100000 ; i >= 0 ; i--){
		fprintf(f2,"%d\n",i);
	} 
	fclose(f2);
	FILE *f3 = fopen("BAvg.txt","w");
	for(i = 1 ; i <= 100000 ; i++){
		fprintf(f3,"%d\n",rand()%100000);
	} 
	fclose(f3);
	
}

