#include<stdio.h>
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	
}
void main()
{
	int a=10,b=20;
	printf("values of a and b before swap:%d %d\n",a,b);
	swap (a,b);
	printf("values of a and b after swap:%d %d\n",a,b);
	
}
