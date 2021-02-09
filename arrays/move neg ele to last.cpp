#include<stdio.h>
main()
{ int a[20],i,n,m=0,c=0,b=0;
printf("enter n value\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("enter ele\n");
scanf("%d",&a[i]);
}m=n;
for(i=0;i<n;i++)
{ if(a[i]<0)
{ a[m]=a[i];
a[i]=0;c++;m++;
}
}
for(i=0;i<(n+c);i++)
{ if(a[i]!=0)
{ a[b]=a[i];b++;
}
}
printf("\nafter modification is \n");
	
		for(i=0;i<(n);i++)
	printf("%d ",a[i]);
}
