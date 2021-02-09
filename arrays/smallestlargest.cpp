#include<stdio.h>
main()
{
	int i,j,a[20],b[20],n,min,k=0,temp;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ printf("enter ele\n");
	scanf("%d",&a[i]);
	}
	printf("original array is \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	for(i=0;i<n;i++)
	{ min=a[i];
	for(j=i+1;j<n;j++)
	{
	
	if(a[j]<min)
	{ min=a[j];k=j;
	}
}
	if(min!=a[i])
	{ temp=a[i];
	a[i]=a[k];
	a[k]=temp;
	}
	}
	printf("after rearrangement in ascending order\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);i=0;j=n-1;k=0;
	while(i<(n/2))
	{ b[k]=a[i];
	i++;k++;
	b[k]=a[j];j--;k++;
	}
	if(n%2!=0) 
	{ b[k]=a[i];
	}
	printf("after real changing\n");
	for(k=0;k<n;k++)
	printf("%d ",b[k]);
}
