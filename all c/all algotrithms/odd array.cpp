#include<stdio.h>
int find_odd(int a[],int k)
{int count=0,t=k,i,n=k;
  for(i=0;i<n;i++)
{ if(a[i]%2!=0)
{ 
 if(count==k)
 { break;
 }
 count++;
}
 
}
 printf("%d ",a[count]);
 return  0;   
}
int main()
{ int k,a[100];
  
scanf("%d",&k);
  for(int i=0;i<k;i++)
  {scanf("%d",&a[i]); 
}
find_odd(a,k);
  return 0;
}
