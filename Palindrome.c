#include<stdio.h>

int main()
{
    int rev=0,n,rem,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}