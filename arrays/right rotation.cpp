#include<stdio.h>
main()
{ int a[20],b,i,n,c=0;
printf("enter no of ele\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("enter ele\n");
scanf("%d",&a[i]);
}
printf("before rotation of array\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("enter no of rotations\n");
scanf("%d",&b);c=0;
while(c<b)
{ int t=a[n-1];i=n;
while(i>0)
{ a[i]=a[i-1];i--;
}

a[0]=t;c++;
}

for(i=0;i<n;i++)
printf("\n%d ",a[i]);
}
