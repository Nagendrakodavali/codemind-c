#include<stdio.h>
int is_prime(int n)
{
	if(n==1)
	{
		return 0;
	}
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int prime_in_a_range(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(is_prime(i)==1)
		{
			printf("%d ",i);
		}
	}
}
int composites_in_a_range(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(is_prime(i)!=1)
		{
			printf("%d ",i);
		}
	}
}
int main()
{
	int choice;
			printf("enter choice\n");
			printf("1.primality check\n");
			printf("2.prime in a range\n");
			printf("3.composites in a range\n");
			scanf("%d",&choice);
			if(choice==1)
			{
				int z;
				printf("enter number\n");
				scanf("%d",&z);
				if(is_prime(z)==1)
				{
					printf("prime");
				}
				else
				{
					printf("not prime");
				}
			}
			else if(choice==2)
			{
				int y,z;
				scanf("enter range\n");
				scanf("%d%d",&y,&z);
				prime_in_a_range(y,z);
			}
			else if(choice==3)
			{
				int m,n;
				printf("enter range\n");
				scanf("%d%d",&m,&n);
				composites_in_a_range(m,n);
			}
}
