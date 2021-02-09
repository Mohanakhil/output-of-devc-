#include<stdio.h>
main()
{
	int a[20]={0},j,i,n,temp,b[20]={0};
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter ele\n");
	scanf("%d",&a[i]);
	}
j=0;i=0;int k=1;printf("original array is \n");
for(i=0;i<n;i++) printf("%d ",a[i]);
i=0;j=0;
while(i<n)
{
	if(a[i]>0) 
	{b[j]=a[i];j=j+2;
	}
	else{
		b[k]=a[i];k=k+2;
	}
	i++;
} printf("before deleting zeroes and total ele are %d\n",j+k);
for(i=0;i<(j+k);i++) 
printf("%d ",b[i]);

i=0;int c=0;
while(i<(j+k))
{ if(b[i]!=0)
{
b[c]=b[i];c++;}
i++;
}
printf("\nafter deleting zeors\n");
for(i=0;i<n;i++) printf("%d ",b[i]);
}
