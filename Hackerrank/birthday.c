#include<stdio.h>
int main()
{
    int m,d,n;
    scanf("%d",&n);
    int a[n],i=0;
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    scanf("%d%d",&d,&m);
    int count = 0; 
    while(i<n-3)
    {
        if((a[i]+a[i+1]+a[i+2])==d)
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}