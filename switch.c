#include<stdio.h>
int main()
{
	char symbol;
	scanf ("%c",&symbol);
	
	switch(symbol)
	{
		case '+':
			printf("addition\n");
			break;
		case '-':
			printf("subtract\n");
			break;
		case '*':
			printf("multiplication\n");
			break;
		case '/':
			printf("division\n");
			break;
		default:
			printf("enter the valide symbol name");
			break;
	}
}
