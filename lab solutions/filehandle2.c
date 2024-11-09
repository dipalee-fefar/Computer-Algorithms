#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
	int i;
	FILE *f1=open("Bestcase.txt","w");
	FILE *f2=open("Averagecase.txt","w");
	FILE *f3=open("Worstcase.txt","w");
	
	for (i=1;i<100;i++)
	{
		fprintf(f1,"%d \n",i);
		fprintf(f2,"%d \n",rand()%100);
		fprintf(f3,"%d \n",101-i);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
}
