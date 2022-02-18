#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int len=0,i,j,t;
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	i=0;
	j=len-1;
	while(i<j)
	{
     	t=str[j];
    	str[j]=str[i];
    	str[i]=t;
	i++;
	j--;	
	}
	printf("%s",str);	
}
