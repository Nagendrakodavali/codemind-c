#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	char s2[100];
	scanf("%[^\n]s",s1);
	scanf(" %[^\n]s",s2);
	strcat(s1,s2);
	printf("%s",s1);
}
