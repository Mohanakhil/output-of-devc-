#include<stdio.h>
#include<stdlib.h>
void sorting(int a[],int n)
{
	int i=0,t,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j]) 
			{ t=a[i];
			a[i]=a[j];a[j]=t;
			}
		}
	}
	
}
int deleting(int a[],int n,int c[])
{ int j=0;
for(int i=0;i<n;i++)
{ 
	if(a[i]!=a[i+1]) 
	{ c[j]=a[i];j++;
	}
}
return j;
}
main()
{
	int a[100],i=0,b,n,j,c[100],k;
	do{
		printf("enter ele\n");
		scanf("%d",&a[i]);
		printf("press 2 to terminate\n");
		scanf("%d",&b);i++;
	}while(b!=2);n=i;printf("after sorting is \n");
	sorting(a,i);
	for(b=0;b<i;i++)
	{ printf("%d ",a[b]);
	}
	j=deleting(a,i,c);
	printf("after deleting duplicates\n");
	for(k=0;k<j-1;k++)
	{
		printf("%d ",c[k]);
	}
	
}
