#include<stdio.h>
void change(int *arr)
{
	arr[0]=20;
	arr[1]=100;
}
void main()
{
	int arr[5]={35,55,25,6,10};
	printf("before change:%d\n",arr[0]);
	change(arr);
	printf("after chang:%d\n",arr[1]);
}
