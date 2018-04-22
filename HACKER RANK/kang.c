#include<stdio.h>
int main()
{
    int a[4];
    scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
    if(a[0]<a[2] && a[1]==a[3])
    {
        printf("NO");
    }
    else if((((a[2]-a[0])%(a[1]-a[3]))==0)&&(((a[2]-a[0])*(a[1]-a[3]))>0))
    {
        printf("YES");    
    }
    else
    {
        printf("NO");
    }
    return 0;
}