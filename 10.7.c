//this program is created by vivek kumar
//this program is to calculate the number of combinations one can make from n items and r selected at a time
#include<stdio.h>
int num1(int n);
int num2(int r);
int num3(int g);
int n;
int main()
{
int a,b,x,y,z,n,r,t;
printf("please enter n and r\n");
scanf("%d%d",&n,&r);
x=num1(n);
y=num2((n)-(r));
t=num3(r);
if(n>=r)
{
z=(x/(y*t));
printf("number of combination one can make from n items selection r at a time is\n");
printf("%d\n",z);
}
return 0;
}
int num1(int n)
{
int v;
if(n==1)
{
return 1;
}
v=n*num1(n-1);
return (v);
}

int num2(int r)
{
int p;
if((r)==1||r==0)
{
return 1;
}
p=(r) * (num2((r)-1));
return (p);
}
int num3(int r)
{
int m;

if(r==1)
{
return 1;
}
m=(r) * (num3(r-1));
return (m);
}
