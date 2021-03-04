#include<stdio.h>
#include<stdlib.h>

double a,b,c,d;//全局变量接收系数 

double function(double x)//方程 
{
 	return a*x*x*x+b*x*x+c*x+d;
}

int main()
{
	int count=0,i=0;
	double x1=0,x2=0,middle=0;//使用float会使得方程计算出错,方程需要输入double类型的数字 
	double result_1=0,result_2=0;

	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);//%lf表示double类型 
	
	for(i=-100;i<100;i++)
	{
		x1=i;
		x2=i+1;
		
		result_1=function(x1);
		result_2=function(x2);
		
		if(result_1==0)//直接遇到参数 
		{
			if(count!=2)
			{
				printf("%.2f ",x1);
				count++;
			}
			else
			{
				printf("%.2f",x1);
				count++;
			}
			
		}
		
		if(result_1*result_2<0)//区间中有一个根，利用二分法 
		{
			while(x2-x1>=0.001)
			{
				middle=(x1+x2)/2;
				if(function(x1)*function(middle)<0)
				{
					x2=middle;
				}
				else
				{
					x1=middle;
				}
			}
			if(count!=2)
			{
				printf("%.2f ",x1);
				count++;
			}
			else
			{
				printf("%.2f",x1);
				count++;
			}
			middle=0;
		}
		if(count==3)//题目已经给出只有三个根 
		{
			break;
		}
		
	}
	return 0;
	
}
