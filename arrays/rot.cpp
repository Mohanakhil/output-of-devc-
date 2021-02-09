#include<stdio.h>
main()
{
int n,i,a[20],end,t,c,b;
printf("enter no of ele\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter ele\n");
	scanf("%d",&a[i]);}
	
printf("before rotation\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("enter 1 for anticlock and 2 for clockwise\n");
scanf("%d",&c);
if(c==1)
{ printf("enter no of rotations\n"); scanf("%d",&b);end=b-1;i=0;
while(i<end)
{ t=a[i];
a[i]=a[end];
a[end]=t;end--;i++;
}
i=b;end=n-1;
while(i<end)
{ t=a[i];
a[i]=a[end];
a[end]=t;end--;i++;
}
i=0;end=n-1;
while(i<end)
{ t=a[i];
a[i]=a[end];
a[end]=t;end--;i++;
}
}
if(c==2)
{ printf("enter no of rotations\n"); scanf("%d",&b);i=n-b;end=n-1;
while(i<end)
{ t=a[i];
a[i]=a[end];
a[end]=t;i++;end--;
}
i=0;end=n-b-1;
while(i<end)
{ t=a[i];
a[i]=a[end];
a[end]=t;i++;end--;
}
i=0;end=n-1;
while(i<end)
{ t=a[i];
a[i]=a[end];
a[end]=t;i++;end--;
}
}

for(i=0;i<n;i++)
printf("%d ",a[i]);
}
