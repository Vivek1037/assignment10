//this program is cretaed by vivek kumar
//this program is to calculate simple interest by using function
#include<stdio.h>
int SI(float p,float r,float t);
float p,r,t;
int main()
{
float y;
y=SI(p,r,t);
printf("the value of simple interest is %f\n",y);
return 0;
}
int SI(float p,float r,float t)
{

printf("please enter the value of principal,rate,time\n");
scanf("%f%f%f",&p,&r,&t);

return((p*r*t)/100);
}
