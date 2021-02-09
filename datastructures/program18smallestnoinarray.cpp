#include<stdio.h>
int main()
{
	int a[100],i,n,min,pos;
	printf("enter no of nos\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter no a[%d]= ",i);
		scanf("%d",&a[i]);
	}min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
		min=a[i];pos=i;
		}
		
	}
	printf("smallest position is a[%d] and number in that is %d",pos,a[pos]);
	return 0;
}
