#include<stdio.h>
int a;
int walk=0,t=0,min=0;
int b[10][10],x[10][10];

void entrance(int m,int n)

{
	if(m==a-2 && n==a-2)//��¼�����յ�ĳ���
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
	//�ƶ���λ���� 
	if(b[m][n]==0 && x[m][n]==0)//������ 
	{
		walk++;
		x[m][n]=1;
		entrance(m+1,n);//�����ߵķ�λ������á��߹��Ĳ�����1 
		x[m][n]=0;//����η�λ��� 
		walk--;
	}
	if(b[m][n]==0 && x[m][n]==0)//������ 
	{
	    walk++;
		x[m][n]=1;
		entrance(m-1,n);
		
		x[m][n]=0;
		walk--;
	}
		if(b[m][n]==0 && x[m][n]==0)//������ 
	{
	    walk++;
		x[m][n]=1;
		entrance(m,n-1);
		x[m][n]=0;
		walk--;
	}
	if(b[m][n]==0 && x[m][n]==0)//������ 
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
	scanf("%d",&a);//�����Թ����� 
	for(int c=0;c<a;c++)//�����Թ�ͼ
	{
		for(int d=0;d<a;d++)
		{
			scanf("%d",&b[c][d]);
		}
	}
	entrance(1,1);//��������괫������ 
	if(min) 
	printf("%d",min);
	else
	printf("No solution");
	
	
}


