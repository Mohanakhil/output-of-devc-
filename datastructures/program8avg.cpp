#include<stdio.h>
int main()
{
	int n,i=0,sum=0;
	float avg=0;
	printf("enter value of n\n");
	scanf("%d",&n);
	do{
		sum=sum+i;
		i=i+1;
	} while(i<=n);
	avg= (float)sum/n;
	printf("\nThe sum of first %d nos is %f",n,avg);
	return 0;
}
