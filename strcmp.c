#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	char s2[100];
	int res;
	scanf("%[^\n]s",&s1);
	scanf(" %[^\n]s",&s2);
	res=strcmp(s1,s2);
	printf("%d",res);
}
