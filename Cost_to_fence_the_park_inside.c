#include<stdio.h>
int main()
{
    float l,b,w,c,area_park,area_fence,total_cost;
    scanf("%f%f%f%f",&l,&b,&w,&c);
    area_park=l*b;
    area_fence=(l-(2*w))*(b-(2*w));
    total_cost=(area_park-area_fence)*c;
    if(l>2*w&&b>2*w)
    printf("%.0f",total_cost);
    else
    printf("Impossible");
}