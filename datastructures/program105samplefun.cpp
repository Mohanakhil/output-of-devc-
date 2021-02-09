#include<stdio.h>
void dis(int,int *);
main()
{
	int i,n,a[10],*p;
	printf("enter no of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter \n");
		scanf("%d",&a[i]);
	}
	p=&a[0];
for(i=0;i<n;i++)
{
	dis(i,&a[i]);
	
}

}
void dis(int j,int *b)
{
	printf("value in %d is %d\n",j+1,*b);
	
}
