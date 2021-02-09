#include<stdio.h>
int main()
{
	int a[100],mean,i,sum=0,n;float avg;
	printf("enter no of nos\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}avg=sum/n;
	printf("the sum is %d and avg is %f",sum,avg);
	return 0;
}
