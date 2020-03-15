#include<stdio.h>
#pragma warning(disable:4996)
int a;
int walk=0,t=0,min=0;
int b[10][10],x[10][10];

void entrance(int m,int n)

{
	if(m==a-2 && n==a-2)//记录走至终点的长度
	{
    	if(t==0)
		{
			min=walk;
		}
		if(walk<min)
		{
			min=walk;
		}
		t++; 
		return;
	}
	//移动方位控制 
	if(b[m][n]==0 && x[m][n]==0)//向上走 
	{
		walk++;
		x[m][n]=1;
		entrance(m+1,n);//将所走的方位标记重置、走过的步数减1 
		x[m][n]=0;//将这次方位标记 
		walk--;
	}
	if(b[m][n]==0 && x[m][n]==0)//向下走 
	{
	    walk++;
		x[m][n]=1;
		entrance(m-1,n);
		
		x[m][n]=0;
		walk--;
	}
		if(b[m][n]==0 && x[m][n]==0)//向左走 
	{
	    walk++;
		x[m][n]=1;
		entrance(m,n-1);
		x[m][n]=0;
		walk--;
	}
	if(b[m][n]==0 && x[m][n]==0)//向右走 
	{
	    walk++; 
		x[m][n]=1;
		entrance(m,n+1);
		x[m][n]=0;
		walk--;
	}

}

int main()
{
	scanf_s()("%d",&a);//输入迷宫长度 
	for(int c=0;c<a;c++)//构造迷宫图
	{
		for(int d=0;d<a;d++)
		{
			scanf_s()("%d",&b[c][d]);
		}
	}
	entrance(1,1);//将入口坐标传给函数 
	if(min) 
	printf("%d",min);
	else
	printf("No solution");
	
	
}


