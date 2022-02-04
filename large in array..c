#include<stdio.h>
int main()
{
	int i,size,small;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=0;i<size;i++)
	{
	
	if(a[i]<small)
	{
	small=a[i];
	}
}
	printf("%d",small);
}
