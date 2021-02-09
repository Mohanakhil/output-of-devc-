#include<stdio.h>
int main()
{
	int a[20],b,i,n,sum[20]={0},c=0,k=0,t,d;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter ele\n");
		scanf("%d",&a[i]);
	}
	printf("before calcu\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);b=1;c=0;
		for(i=0;i<n;i++)
	{
	sum[k]=sum[k]+a[i]*(i+1);}k++;
	

	

	while(c<b)
	{ 	i=0;t=a[i];
	while(i<n-1)
	{ a[i]=a[i+1];i++;
	}
	a[i]=t;	c++;
	}
		for(i=0;i<n;i++)
	{
	sum[k]=sum[k]+a[i]*(i+1);}k++; 
	d++;b++;
	} int  max=a[0];
	for(k=1;k<n;k++)
	{ 
	if(a[k]>max) max=a[k];
	}
	printf("max is %d",max);
}
