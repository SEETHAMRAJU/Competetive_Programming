#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    //printf("%d %d %d\n",a,b,c);
    if(a>b && a>c)
    {
        printf("greatest is %d\n",a);
    }
    else if(c>b && c>a)
    {
        printf("greatest is %d\n",c);
    }
    else if (b>a && b>c)
    {
        printf("greatest is %d\n",b);
    }
    else
    {
        printf("All are equal!!\t\n");
    }
    return 0;
}