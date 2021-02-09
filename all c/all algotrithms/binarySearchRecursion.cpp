#include<stdio.h>
int binarySearchRecursion(int a[],int n,int x,int l,int r)
{ int mid= l+(r-1)/2;
if(a[mid]==x) return mid;
if(a[mid]<x) return binarySearchRecursion(a,n,x,mid+1,r);
if(a[mid]>x) return binarySearchRecursion(a,n,x,l,mid-1);
}
int main()
{int a[10],n,x,i;
printf("enter no of ele\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("enter ele to search\n");
scanf("%d",&x);
int l=0;
int r=0;
printf("ele %d is present at index=%d\n",x,binarySearchRecursion(a,n,x,l,r));
}
