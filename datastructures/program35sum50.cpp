#include<stdio.h>
int main()
{
	int n,i,j,a[100],b[100],c[100],sum=0;
	printf("enter no of ele= \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{sum=a[i]+a[j];printf("sum is %d\n",sum);
			if((a[i]+a[j])==50)
			{b[i]=a[i];c[i]=a[j];
			}
			else {b[i]=0;c[i]=0;
			}
		sum=0;}
	}
	
	for(i=0;i<n;i++)
	{
	
	
	{
	
	{printf("pairs are %d %d \n",b[i],c[i]);
	}}
}
	return 0;
}
