#include<stdio.h>
main()
{ int a[10],i,n,b,c=0,t,d,k;
printf("enter no of ele\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("enter ele\n");
scanf("%d",&a[i]);
}d=n;

printf("before rotation\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\nenter no of nos to rotate clockwise\n");
scanf("%d",&b);k=n-1;
while(c<b)
{ t=a[n-1];
while(n>=2)
	{
	a[n-1]=a[n-2];
	n--;
	}
	a[0]=t;c++;
	n=k+1;
	}
	printf("after rotating\n");
	for(i=0;i<d;i++)
	printf("%d ",a[i]);	
}
