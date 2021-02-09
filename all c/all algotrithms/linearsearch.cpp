#include<stdio.h>
int index(int a[],int x,int n)
{ int i=0;
for(i=0;i<n;i++)
{if(a[i]==x)
return i;
}
return -1;	
}
int main()
{int a[10],n,x;
printf("enter size of array\n");
scanf("%d",&n);
for(x=0;x<n;x++)
{scanf("%d",&a[x]);
}
printf("enter ele to search\n");
scanf("%d",&x);
printf("%d ",index(a,x,n));
}
