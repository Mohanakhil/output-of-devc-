#include<stdio.h>
main()
{
	int a[20]={0},j,i,n,temp;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter ele\n");
	scanf("%d",&a[i]);
	}
	int prev=a[0];a[0]=a[0]*a[1];
	int k=a[n-2];
	for(i=1;i<n-1;i++)
	{
	temp=a[i];
	int current=a[i];
	int next=a[i+1];
	a[i]=prev*next;
	prev=temp;
	}a[n-1]=a[n-1]*k;
	for(i=0;i<n;i++) printf("%d ",a[i]);
}

