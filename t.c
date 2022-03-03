#include<stdio.h>
#include<stdlib.h>
main()
{
	int n=5;
	int *arr;
	arr=(int*)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d %d\n", arr+i,*(arr+i));
	}
	printf("before initalizing the array");
	for(i=0;i<n;i++)
	{
		printf("array elements are\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",arr+i);
		}
		printf("array elements are\n");
		for(i=0;i<n;i++)
		{
			printf("%d %d\n",arr+i,*(arr+i));
		}
	/*	free(arr);
		for(i=0;i<n;i++)
		{
			printf("%d %d\n",arr+i,*(arr+i));
		}*/
		int m=2;
		//reallocation memory using realloc
		realloc(arr,m*sizeof(int));
		printf("%d bytes of memory reallocated\n",m*sizeof(int));
		printf("enter %d elements\n",m);
		for(;i<n+m;i++);
		{
			scanf("%d",arr+i);
		}
		for(i=0;i<n+m;i++)
		{
			printf("%d %d\n",arr+i,*(arr+i));
		}
	}
	
}
	

