//written by @perascro
//this code is to prove the sum of series 1/n do not have limit 
#include<stdio.h>
#include<math.h>
double plus(double n);
int main()
{
double n,s;
for(int t=1;t>0;t++)
{
printf("enter n.\n");
if(n==-1)
{
t=-1;
}
else
{
scanf("%lf",&n);
plus(n);
}
}
return 0;
}
double plus(double n)
 {
 double s=0;
 for(double i=1;i<=n;i++)
{
s+=1/i;
}
printf("%.15lf \n",s);
return 0;
 }