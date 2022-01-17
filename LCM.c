#include<stdio.h>
main()
{
    int a=12,b=24,i=1;
    scanf("%d%d",&a,&b);
    while(a*i%b !=0)
    {
        i++;
    }
    printf("%d",a*i);
}