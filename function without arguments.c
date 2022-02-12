#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	add(a,b);
}
add(int x,int y)
{
	int z;
	z=x+y;
	printf("%d",z);
}
