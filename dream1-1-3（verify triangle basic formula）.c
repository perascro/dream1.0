//written by @perascro
//use this code to verify sin(x)^2+cos(x)^2=1
#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,x,y,z;
printf("please enter a and b.\n");
scanf("%lf%lf",&a,&b);
c=sqrt(a*a+b*b);
x=a/c;
y=b/c;
z=x*x+y*y;
printf("sin(x)^2 +cos(x)^2=%lf\n",z);
return 0;
}