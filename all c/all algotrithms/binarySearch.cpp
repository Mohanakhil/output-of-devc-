#include<stdio.h>
int binarySearch(int a[],int n,int x)
{ int  m,l,r;
l=0;
r=n-1;

while(l<=r)
{m=(l+r)/2;printf("new m is %d",m);
if(a[m]==x) return m;
if(a[m]<x)
l=m+1;
else if(a[m]>x) 
r=m-1;
}
}
int main()
{int a[10],i,x,t,j,n;
printf("enter size of array\n");
scanf("%d", &n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("enter ele to search");
scanf("%d",&x);


printf("\n %d is the index \n",binarySearch(a,n,x));
}
