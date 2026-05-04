 //written by @perascro
// this code is to calculate sin value according to side length
#include<stdio.h>
#include<time.h>
#include<math.h>
int main()
{
	double a,b,c;//represent three length of triangle
	double d,s,sinA,sinB,sinC;
	while(1)
	{
	
	printf("please enter a,b,c\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a<=0||b<=0||c<=0)
	{
		break;
	}
	if(a+b>c&&b+c>a&&a+c>b)
	{
	d=(a+b+c)/2;
	s=sqrt(d*(d-a)*(d-b)*(d-c));
	sinA=2*s*(1/(b*c));
	sinB=2*s*(1/(a*c));
	sinC=2*s*(1/(a*b));
	printf("the value of area equal to %lf\n",s);
	printf("the value of sinA equal to %lf\n",sinA);
	printf("the value of sinB equal to %lf\n",sinB);
	printf("the value of sinC equal to %lf\n",sinC);
   }
   else 
   {
   	printf("a,b,c could not be correspond with triangle.\n");
   }
}
	return 0;
    
}
