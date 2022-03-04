#include<stdio.h>
#include<string.h>
struct student
{
	int pin;
	char name[20];
	float perc;
};
void main()
{
	int n;
	printf("how many students data you want to store");
	scanf("%d",&n);
	
struct student s[n];
int i;
for(i=0;i<n;i++)
{
	printf("enter student %d pin\n",i+1);
	scanf("%d",&s[i].pin);
	printf("enter student %d name\n",i+1);
	scanf("%s",s[i].name);
	printf("enter student %d percentage\n",i+1);
	scanf("%f",&s[i].perc);
	
}
    printf("student details\n");
	printf("PIN\t\tName\t\tpercentage\n");
	printf("----------------------------------\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\t\t%s\t\t%.2f\n",s[i].pin,s[i].name,s[i].perc);
	}
}
