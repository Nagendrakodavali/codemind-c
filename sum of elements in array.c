#include<stdio.h>
int main()
{
    int i,j,sum=0;
    scanf("%d",&i);
    int a[i];
    scanf("%d",&a[i]);
    for(j=0;j<i;j++)
    {
        scanf("%d",&a[j]);
    }
    for(j=0;j<i;j++)
    {
        printf("%d",a[j]);
    }
    if(1>=i && i<=30)
    {
        sum=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7];
    }
    printf("%d",sum);
    
}
