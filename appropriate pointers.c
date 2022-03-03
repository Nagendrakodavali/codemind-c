#include<stdio.h>
void main()
{
	int a=10;
	char ch='z';
	void *p,*q;
	p=&a;
	q=&ch;
	printf("%d\n",p);
	printf("%d\n",q);
	printf("%d\n",*(int *)p);
	printf("%c\n",*(char *)q);
}
