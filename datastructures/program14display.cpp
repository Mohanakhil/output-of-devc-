#include<stdio.h>
int main()
{
	int a[9],b=0,n,i;
	printf("enter no of nos\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter\n");
		scanf("%d",&a[i]);
	}i=0;
	while(i<n)
{
	while(b<3)
	{
		printf("%d,",a[i]);
		b=b+1;i=i+1;
	}
	printf("\n");
	b=0;
}return 0;
}
