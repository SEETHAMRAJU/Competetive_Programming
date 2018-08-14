#include<stdio.h>
int main()
{
    long int k=0,a[5],max,min;
    scanf("%ld%ld%ld%ld%ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    max = a[0];
    min = a[0];
    while(k < 5)
    {
        if(a[k]>max)
        {
            max = a[k];
        }
        else if(a[k] < min)
        {
            min = a[k];
        }
        k++;
    }
    k=0;
    long int sum=0;
    while(k<5)
    {
        sum = sum + a[k];
    }
    printf("%ld %ld",(sum-max),(sum-min));
    return 0;
}