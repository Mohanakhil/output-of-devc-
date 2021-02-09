#include<stdio.h>
main()
{ int b,i,n,a[20],c;
printf("enter no of ele\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("enter ele\n");
scanf("%d",&a[i]);
}
printf("original array is \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
	i=0;c=0;b=1;int t,d=1,l=0,sum[10]={0},max=0,m;
	for(m=0;m<n;m++)
	{printf("\nvalue of m and n are %d %d\n",m,n);
	while(c<1)
	{ t=a[i];
	while(i<n-1)
	{ a[i]=a[i+1];i++;
	}
	a[i]=t;c++;i=0;
	}
	printf("\nafter rotation for %d time\n",d);
	for(i=0;i<n;i++)
	{sum[l]=sum[l]+((i+1)*a[i]);
	printf("%d ",a[i]);
}
 printf("sum of i*a[i]=%d and value of l is %d\n",sum[l],l);
l++;
	c=0;d++;i=0;
}
max=sum[0];
for(l=0;l<d;l++)
{ if(max<sum[l]) max=sum[l];
} printf("\nmax of all is %d\n",max);

}
