//this program is created by vivek kumar
//this program is to check a given number is even or odd
#include<stdio.h>
int num(int x);
int main()
{
int y,x;
printf("please enetr the value of x\n");
scanf("%d",&x);
y=num(x);
printf("value is %d\n",y);
return 0;
}
int num(int x)
{
int a;

if(x%2==0)
{
a=1;
}
else
{
a=0;
}
return (a);

}
