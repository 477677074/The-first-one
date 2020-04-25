#include<stdio.h>
#define N x 
int main()
{  
	int n,x;
	scanf("%d",&x);
	int a[N][N];
	for(int i=0;i<N;i++)
	{
		for(int m=0;m<N-i;m++)
		{
			printf("  ");
		}
		for(int j=0;j<=i;j++)
		{
			if((0==j)||(i==j))
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
			printf("%4d",a[i][j]);
		}
	printf("\n");
	}
	return 0;
 } 
