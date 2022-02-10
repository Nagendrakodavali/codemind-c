#include<stdio.h>
int main()
{
	int i,j,h,e,m,k,c,d;
	printf("h,e \n");
	scanf("%d %d" ,&h,&e);
	k=h*e;
	int a[h][e],b[h][e];
	printf("array \n");
	for(i=0;i<h;i++)
	{
		for(j=0;j<e;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<h-1;i++) 
	{
		for(j=1;j<e-1;j++) 
		{
		      b[i][j]=a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];	
		}
	}
	for(i=1;i<h-1;i++)
	{
		for(j=1;j<e-1;j++)
		{
			printf("%d     " ,b[i][j]);
		}
	}
	t=b[1][1];
    for(i=1;i<h-1;i++)
	{
		for(j=1;j<e-1;j++)
		{
			if(t<b[i][j])
			{
				t=b[i][j];	
			}
			
		}
	}
	printf("%d  ",d);	
}


