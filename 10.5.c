//this program is created by vivek kumar
//this program is to calculate odd natural numbers
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
printf("first %d odd natural number is:\n",N);
for(i=0;i<N;i++)
{
printf("%d\n",2*i+1);
}
}
