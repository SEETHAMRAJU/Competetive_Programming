#include<stdio.h>
int main()
{
    int x,n,i=0,count=0;
    scanf("%d%d",&n,&x);
    int a[n],k=0;
    while(k<n)
    {
        scanf("%d",&a[i]);
        k++;
    }
    while(i<n-1)
    {
        int j = i +1;
        while(j<n)
        {
            if((a[i]+a[j])%x==0)
            { 
                count++;
            }
            j++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}