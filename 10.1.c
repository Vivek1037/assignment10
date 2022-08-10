//this program is created by vivek kumar
//this program is for calculation of area of a circle by using TSRS
#include<stdio.h>
float area(int r);
int main()
{
float r,y;
printf("please enter the radius of the circle\n");
scanf("%f",&r);
y=area(r);
printf("the area of the circle is %f\n",y);
return 0;
}
float area(int r)
{
float x;
x=3.14159*r*r;
return(x);
}
