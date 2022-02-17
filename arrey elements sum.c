#include<stdio.h>
int arrey_elements_sum(int a[],int size)
{
	int sum=0;
	int i;
	for(i=0;i<size;i++)
	{
		sum +=a[i];
	}
	return sum;
}
void main()
{
	int size;
	scanf("%d",&size);
	int arr[size];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int res=arrey_elements_sum(arr,size);
	printf("%d",res);
	
}
