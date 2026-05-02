//written by @perascro
// this code is to verify the open of 1/(1-x) equal to 1+x^2+x^3+x^4......
#include<stdio.h>
#include<time.h>
int main()
{
	double x,y,z,t,start,end,seconds;
	while(1)
	{
	
	t=1;
	z=0;
	printf("enter x not belongs to [0,1) you can exit programme.\n");
	printf("enter x.\n");
	scanf("%lf",&x);
	start=clock();
	y=1/(1-x);
	for(int i=1;i<=100000;i++)
	{
		z=z+t+t*x+t*x*x+t*x*x*x;
		t=t*x*x*x*x;
	}
	end=clock();
	printf("the value of 1/1-x equal to %.15lf\n",y);
	printf("the value of sum of x^(n-1) equal to %.15lf\n",z);
	printf("the time of run is %.15lf seconds\n",(end-start)/(CLOCKS_PER_SEC));
	printf("-------------------------------------------------");
	printf("\n");
	if(x>=1||x<0)
	{
		break;
	}
    }
	return 0;
}
