#include<stdio.h>
int rev(int n)
{
    int d,rev=0;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
{
    if(i==rev(i))
    printf("%d ",i);
}
}