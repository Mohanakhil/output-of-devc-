#include<stdio.h>
#include<math.h>
int min(int a,int b)
{if(a<b) return a;
else if(b<a) return b;
else if(a==b) return a;
}
int jump(int a[],int n,int x)
{ int step=sqrt(n);
int prev=0;
while(a[min(step,n)-1]<x)
{prev=step;
step=step+sqrt(n);
if(prev>=n)
return -1;
}
while(a[prev]<x)
{prev++;
if(prev==min(step,n))
return -1;
}
if(a[prev]==x)
return prev;

}
int main()
{int a[10],i,n,x;
printf("enter no of ele and ele to find\n");
scanf("%d %d",&n,&x);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("%d ele is present at index= %d\n",x,jump(a,n,x));

}
