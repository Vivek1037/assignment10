//this program is created by vivek kumar
//this program is to print N natural number by using function
#include<stdio.h>
void num(int N);
int main()
{
int N;
printf("please enter the value of N\n");
scanf("%d",&N);
num(N);
return 0;
}
void num(int N)
{
int i;
printf("first N natural number is\n");
for(i=1;i<=N;i++)
{
printf("%d\n",i);
}
}
