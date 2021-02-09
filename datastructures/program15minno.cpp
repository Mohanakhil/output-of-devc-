#include<stdio.h>
int main()
{
	int a[100],n,d,i,min;
	printf("enter no of nos\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter");
		scanf("%d",&a[i]);
		
	}i=1;min=a[0];
	while(i<n)
	{
		if(a[i]<min)
		min=a[i];i=i+1;
	}printf("min is %d",min);
	return 0;
}
