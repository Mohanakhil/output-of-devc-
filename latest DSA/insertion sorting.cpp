#include<iostream>
using namespace std;
void print(int a[],int n)
{for(int i=0;i<n;i++)
{cout<<a[i]<<" ";
}
}
void selectionSort(int a[],int n)
{int i=0,j=0,min,t,temp;
for(i=0;i<(n-2);i++)
{min=a[i];
for(j=i+1;j<n;j++)
{
if(a[j]<min)
{min=a[j];
temp=j;
}
}
t=a[i];
a[i]=a[temp];
a[temp]=t;
}
print(a,n);
}

int main()
{int a[10],n,i;
cout<<"enter no of ele\n";
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
selectionSort(a,n);

}
