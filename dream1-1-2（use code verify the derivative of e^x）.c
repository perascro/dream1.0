//written by @perascro
//this code is to verify the definiton of derivative 
#include<stdio.h>
#include<math.h>
int main()
{
double x,y,z,t;
t=0.000000000001;//to get a small number 
printf("Please enter x to get the value of e^x.\n");
scanf("%lf",&x);
y=exp(x);
z=(exp(x+t)-exp(x))/(t);
printf("the value of e^x is\n  %.15lf  \nthe derivative of e^x is\n %.15lf \n ",y,z);
return 0;
}