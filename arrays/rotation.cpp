#include<stdio.h>
main()
{ int a[20],b,i,n,t;
printf("enter value of n\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter value of ele\n");scanf("%d",&a[i]);
}
printf("before rotation\n");
for(i=0;i<n;i++) 
printf("%d ",a[i]);
printf("enter value of b\n");
scanf("%d",&b);i=0;int c=0;
while(c<b)
{ t=a[i];
while(i<n-1)
{ a[i]=a[i+1];i++;
}
a[i]=t;c++;i=0;
}
printf("after roation by %d times\n",b);
for(i=0;i<n;i++) printf("%d ",a[i]);	
}
