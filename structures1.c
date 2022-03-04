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
	struct student s1;
	s1.pin=123;
	strcpy(s1.name,"hemanth");
	s1.perc=90.00;
	printf("student details\n");
	printf("PIN\t\tName\t\tPercentage\n");
	printf("-------------------------------\n");
	printf("%d\t\t%s\t\t%.2f",s1.pin,s1.name,s1.perc);
	
}
