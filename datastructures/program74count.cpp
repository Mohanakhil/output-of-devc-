#include<stdio.h>
void check(char *,int *,int *,int *,int *);
main()
{ int up=0,lc=0,dig=0,sc=0;
char a[100];
printf("enter a string\n");
gets(a);
check(a,&up,&lc,&dig,&sc);
printf("count of capital,small, digits and Special are %d %d %d %d",up,lc,dig,sc);
}
void check(char *p,int *q,int *r,int *s,int *t)
{ int a=0,b=0,c=0;
while(*p!='\0')
{
a=*q;b=*r;c=*s;
if(*p>='A'&&*p<='Z')  *q=*q+1;
if(*p>='a'&&*p<='z') 
*r=*r+1;
if(*p>='0'&&*p<='9')
*s=*s+1;
if(*q==a&&*r==b&&*s==c) *t=*t+1;
p++;	
}}
