#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	scanf("%[^\n]s",&str);
	strupr(str);
	printf("%s",str);
}
