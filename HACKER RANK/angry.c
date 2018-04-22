#include <stdio.h>
int main()
{
    int t,a=0;
    scanf("%d",&t);
    char ans[3][t];
    while(a < t)
    {
        int i =0 ,k, n ;
        scanf("%d %d",&n , &k);
        int a[n];
        while(i < n)
        {
            scanf("%d",&a[i]);
            i++;
        }
        int e = 0, l = 0;
        i = 0;
        while(i < n)
        {
            if(a[i] > 0)
            {
                l++;
            }
            else
            {
                e++;
            }
            
        }
        if(e > k)
        {
            ans[a][0] = "Y";
            ans[a][1] = "E";
	    ans[a][2] = "S"
	}
        else
        {
            ans[a] = "NO";
        }
        a++;
        
    }
    a = 0;
    while(a<t)
    {
    	printf("%d",)
    }
    return 0;

}
