#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n/1000000000>=1&&n/10000000000<10)
    printf("Valid");
    else
    printf("Invalid");
    return 0;
}