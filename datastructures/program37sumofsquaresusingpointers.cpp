#include<stdio.h>
int main()
{
	int n,i,a[10],*t=a,sum=0;
	printf("enter no of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]= \n",i);
		scanf("%d",t);      printf("computer is taking in %d\n",*t);t=t+1;
	}t=&a[0];              printf(" *t value is %d\n",*t);
	for(i=0;i<n;i++)
	{
		sum=sum+((*t)*(*t));
		t=t+1;           printf("*t value now is %d\n",*t);
	}
	printf("sum of squares is %d",sum);
}
