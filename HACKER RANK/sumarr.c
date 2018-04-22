#include<stdio.h>
int main()
{
    int x,i=0,sum=0;
    scanf("%d",&x);
    int a[x];
    while(i<x)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
        i++;
    }
    printf("%d",sum);
    return 0;
}