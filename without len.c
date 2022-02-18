#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int len=0,i;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("%d",len);
}
