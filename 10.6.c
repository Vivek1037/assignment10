//this p[rogram is created by vivek kumar
//this program is to find factorial of a number
#include<stdio.h>
int fact(int x);
int main()
{
int x,y;
printf("please enter the value of x to calculate factorial of number\n");
scanf("%d",&x);
y=fact(x);
printf("factorial of %d is %d\n",x,y);
return 0;
}
int num(int x)
{
if(x==1)
{
return 1;
}
fact=(x)*(fact(x-1));
return(fact);
}
