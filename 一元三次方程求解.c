#include<stdio.h>
#include<stdlib.h>

double a,b,c,d;//ȫ�ֱ�������ϵ�� 

double function(double x)//���� 
{
 	return a*x*x*x+b*x*x+c*x+d;
}

int main()
{
	int count=0,i=0;
	double x1=0,x2=0,middle=0;//ʹ��float��ʹ�÷��̼������,������Ҫ����double���͵����� 
	double result_1=0,result_2=0;

	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);//%lf��ʾdouble���� 
	
	for(i=-100;i<100;i++)
	{
		x1=i;
		x2=i+1;
		
		result_1=function(x1);
		result_2=function(x2);
		
		if(result_1==0)//ֱ���������� 
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
		
		if(result_1*result_2<0)//��������һ���������ö��ַ� 
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
		if(count==3)//��Ŀ�Ѿ�����ֻ�������� 
		{
			break;
		}
		
	}
	return 0;
	
}
