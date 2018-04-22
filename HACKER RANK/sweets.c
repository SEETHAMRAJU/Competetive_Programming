#include<stdio.h>
int find_prisoner(int , int , int);
int main()
{
    int t;
    scanf("%d",&t);
    int i=0,ans[t];
    while(i < t)
    {
        int n,m,s,a;
        scanf("%d %d %d",&n,&m,&s);
        a = find_prisoner(n,m,s);
        ans[i] = a;
        i++;
    }
    i = 0;
    while(i<= t-1)
    {
        printf("%d\n",ans[i]);
        i++;
    }
    return 0;
}


int find_prisoner(int n , int m , int s)
{
    if(n - s > m)
        {
            return (s+m-1);
        }
    else
        {
            int new_m = m - (n - s + 1);
            return find_prisoner(n,new_m,1);       
        }
}