//written by @perascro
#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,q,e;
//a brief calculator that calculate the area value of triangle
printf("a, or b or c =0 exit\n");
for(int i=1;i>0;i++)
{
printf("enter the value of a and b and c.\n");
scanf("%lf%lf%lf",&a,&b,&c);
if(a==0||b==0||c==0)
{
break;
}
if(a + b > c && b + c > a && a + c > b){
q=(a+b+c)*(0.5);
e=sqrt(q*(q-a)*(q-b)*(q-c));
printf("The value of area is | %.15lf |",e);
printf("\n");
}
else 
{
printf("your code is not correspond with triangle！\n");
}
}
return 0;
}
    