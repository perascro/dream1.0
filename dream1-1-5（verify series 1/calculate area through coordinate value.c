//written by @perascro
// this code is to calculate area through coordinate value
#include<stdio.h>
#include<time.h>
#include<math.h>
int main()
{
	
	double a[1][2];
	double b[1][2];
	double c[1][2];
	double abx;
	double aby;
	double bcx;
	double bcy;
	double area;
	int confirm;
	while(1)
	{
	
	printf("please enter the value of a\n");
	for(int i=0;i<1;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%lf",&a[i][j]);
			
		}
	}
	printf("please enter the value of b\n");
	for(int i1=0;i1<1;i1++)
	{
		for(int j1=0;j1<2;j1++)
		{
			scanf("%lf",&b[i1][j1]);
			
		}
	}
	printf("please enter the value of c\n");
	for(int i2=0;i2<1;i2++)
	{
		for(int j2=0;j2<2;j2++)
		{
			scanf("%lf",&c[i2][j2]);
			
		}
	}
	abx=b[0][0]-a[0][0];

	aby=b[0][1]-a[0][1];
	
	
	bcx=c[0][0]-b[0][0];
	
	bcy=c[0][1]-b[0][1];
	area=0.5*fabs(abx*bcy-bcx*aby);
    if(area>0)
    {
    	printf("the area of the triangle equals to %lf\n",area);
	}
	else
	{
		printf("your data could not be comprised of triangle.\n");
	}
	
	printf("exit or continue?\n 1.exit   2.continue\n");
	scanf("%d",&confirm);
	if(confirm==1)
	{
		break;
	}
	else
	{
		printf("the next turn\n");
	}
	
    }
    
    
	
	return 0;
}
