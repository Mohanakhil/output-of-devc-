#include<stdio.h>
main()
{ int a[100],t,i,n,b,j;
printf("enter no of ele\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("enter ele\n");
scanf("%d",&a[i]);
}
printf("before rot\n");
for(i=0;i<n;i++)
{ printf("%d ",a[i]);
}
printf("enter no of ele for rotation\n");
scanf("%d",&b);i=0;
int c=b,end=b-i-1;
while(i<end)
{ 
t=a[i];
a[i]=a[end]; printf("\na[%d]= %d\n",i,a[b-i-1]);
a[end]=t; printf("\n\na[%d]=%d\n",b-i-1,a[b-i-1]);
i++;end--; 
}
i=c;end=n-1;
while(i<end)
{ t=a[i];
a[i]=a[end];
a[end]=t;
	end--;i++;
}
i=0;end=n-1;
while(i<end)
{ t=a[i];
a[i]=a[end];
a[end]=t;
end--;i++;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
