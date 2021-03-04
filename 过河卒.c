#include<stdio.h>

#define z_SUN_1 1
#define z_SUN_2 2
#define BIG_GRIDSIZE 22
#define GRIDSIZE 20
long long main()
{
	
	long long bound_x=0,bound_y=0,horse_x=0,horse_y=0,i=0,j=0;
	long long grid[BIG_GRIDSIZE][BIG_GRIDSIZE]={0};
	
	
	
	scanf("%d%d%d%d",&bound_x,&bound_y,&horse_x,&horse_y);
	grid[bound_x+1][bound_y]=1;
	

	
	for(i=bound_x;i>=0;i--)
	{
		for(j=bound_y;j>=0;j--)
		{
			if(i==horse_x&&j==horse_y||i==horse_x-2&&j==horse_y-1||i==horse_x-1&&j==horse_y-2||i==horse_x+1&&j==horse_y-2||i==horse_x+2&&j==horse_y-1||i==horse_x+2&&j==horse_y+1||i==horse_x+1&&j==horse_y+2||i==horse_x-1&&j==horse_y+2||i==horse_x-2&&j==horse_y+1)
			{
				grid[i][j]=0;
			}
			else
			{
				grid[i][j]=grid[i+1][j]+grid[i][j+1];
			}
		}
	}
	
	printf("%lld",grid[0][0]);
	return 0;
}




