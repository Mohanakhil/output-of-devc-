#include<stdio.h>
main()
{
	int a[20],i,n,cz=0,cnz=0,b=0;
	printf("eneter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ printf("enter ele\n");
	scanf("%d",&a[i]);
	}
	printf("before modification is \n");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	for(i=0;i<n;i++)
	{ if(a[i]==0) cz++;
	else cnz++;
	} printf("zeroes are %d and nonzeroes are %d\n",cz,cnz);
	for(i=0;i<n;i++)
	{ if(a[i]!=0) 
	{ a[b]=a[i];b++;
	}
	} 
	for(i=cnz;i<n;i++)
	{ a[i]=0;
	}
	for(i=0;i<n;i++)
	{ printf("%d ",a[i]);
	}
}
