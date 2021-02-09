#include<stdio.h>
int  main()
{
	int a[100],n,i,b[100],j,flag=0,t=0,k=0;
	printf("enter no of digits\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter no ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			t=t+1;
			b[k]=a[i];flag=1;k=k+1;}
		}
	}
	if(flag==0) printf("\nThere is no repetition in array");
	else{
	 printf("\nthe repeated no are\n");
	for(i=0;i<t;i++)
	{
	printf(" %d ",b[i]);
	}}return  0;
}
