#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	scanf("%[^\n]s",str);
	strlwr(str);
	printf("%s",str);
}
