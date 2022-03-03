#include<stdio.h>
#include<stdlib.h>
main()
{
	int n=5;
	int *arr;
	arr=(int*)malloc(n*sizeof(int));
	int i;
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
		free(arr);
	}
	
}
