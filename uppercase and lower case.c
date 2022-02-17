#include<stdio.h>
void main()
{
	char ch;
	printf("enter the characters");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122)
	{
		printf("lowercase");
	}
	else if(ch>=65 && ch<=90)
	{
		printf("uppecase");
	}
}
