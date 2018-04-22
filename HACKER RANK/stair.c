#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int i = n;
    while(i > 0)
    {
        j=0;
        while(j < n)
        {
            if(j < i-1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}