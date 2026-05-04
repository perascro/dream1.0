//written by @perascro
// this code is to calculate sin value according to side length
#include<stdio.h>
#include<time.h>
#include<math.h>
int main()
{
 double a,b,c;//represent three length of triangle
 double d,s,sinA,sinB,sinC;
 double cosA,cosB,cosC,tanA,tanB,tanC;
 double R,r;
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
 cosA=(b*b+c*c-a*a)/(2*b*c);
 cosB=(a*a+c*c-b*b)/(2*a*c);
 cosC=(a*a+b*b-c*c)/(2*b*a);
 tanA=sinA/cosA;
 tanB=sinB/cosB;
 tanC=sinC/cosC;
 R=a/(2*sinA);
 r=2*s/(a+b+c);
 printf("the value of area equal to %lf\n",s);
 printf("the value of sinA equal to %lf\n",sinA);
 printf("the value of sinB equal to %lf\n",sinB);
 printf("the value of sinC equal to %lf\n",sinC);
 printf("the value of cosA equal to %lf\n",cosA);
 printf("the value of cosB equal to %lf\n",cosB);
 printf("the value of cosC equal to %lf\n",cosC);
 printf("the value of tanA equal to %lf\n",tanA);
 printf("the value of tanB equal to %lf\n",tanB);
 printf("the value of tanC equal to %lf\n",tanC);
 printf("the value of inradius equal to %lf\n",r);
 printf("the value of circumradius equal to %lf\n",R);
 
 
   }
   else 
   {
    printf("a,b,c could not be correspond with triangle.\n");
   }
}
 return 0;
    
}