#include<stdio.h>
int odd(int a[],int);
main()
{ int i,opt,a[100],n=1;
do
{
	printf("enter element \n");
	scanf("%d",&a[i]);n=n+1;
	printf("enter your option\n");
	scanf("%d",&opt);
}while(opt!=0);

printf("\nodd occuring element is %d ",odd(a,n));
	
}
int odd(int arr[],int l)
{
	int r=0,i;
	for(i=0;i<l;i++)
	{
		r^=arr[i];
	}
	return r;
}
