#include<bits/stdc++.h>
#define append push_back
#define M 1000000
#define llint long long int 
using namespace std;
llint arr[M];
llint n,q;
llint solve(llint a);
int main()
{
    llint a;
    vector <llint> ans;    
    scanf("%lld%lld",&n,&q);
    scanf("%lld",&arr[0]);    
    for(llint i=1;i<n;i++)
    {    
        scanf("%lld",&arr[i]);
        arr[i] = arr[i] + arr[i-1];    
    }
    if(q == 0)
    {
        return 0;
    }
        for(llint i=0;i<q;i++)
        {
            scanf("%lld",&a);
            ans.append(solve(a));
        }
    for(llint i=0;i<q;i++)
    {
        printf("%lld\n",ans[i]);
    }
    return 0;
}
llint solve(llint a)
{
    if(a >arr[n-1])
        return -1;
    else
    {
        llint l,r,mid;
        l =0;
        r = n-1;
        while(l != r)
        {
            mid = (l+r)/2;
            if(a<=arr[mid] && a>= arr[mid-1])
            {
                return mid+1;
            }
            else if(a>arr[mid])
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        if(l == r)
        {
            if(arr[l] >= a)
                return l+1;
        }
        return -1;
    }
}
