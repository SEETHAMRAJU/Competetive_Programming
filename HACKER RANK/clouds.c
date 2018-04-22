#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i = 0, tot = 0;
    while(i < n)
    {
        scanf("%d",&a[i++]);
    }
    int* current;
    current = &a[1];
    i = 0;
    while(i < n)
    {
        if(*(current+1) == 0)
        {
            if(*(current + 2) == 0)
            {
                tot++;
                //printf("\nHi 1-1");
                current = current + 2;
                i ++;
                continue;
            }
            else
            {
                tot++;
                //printf("\nHi 1-2");
                current = current + 1;
                i++;
                continue;
            }
        }
        else if(*(current + 2) == 0)
        {
            tot++;
            //printf("\nHi 2-1");
            current = current + 2;
        }
        i++;
             
   }
    printf("\n%d\n",tot);
    return 0;
}