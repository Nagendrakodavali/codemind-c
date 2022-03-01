#include<stdio.h>
int main()
{
	int a,d,nd,sum=0,pro=1;
	scanf("%d",&a);
	nd=a;
	while(nd>0)
	{
		d=nd%10;
		sum+=d;
		pro*=d;
		nd=nd/10;
	}
	if(sum==pro)
	{
		printf("Spy Number");
	}
	else
	{
		printf("Not Spy Number");
	}
	return 0;
}