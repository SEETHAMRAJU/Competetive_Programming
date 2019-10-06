#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ans,temp;
    int s=0;
    cin >>t;
    while(t>0)
    {
        s=0;
        t--;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> temp;
            s += temp;
        }
        ans = s/n + min(s%n,1);
        printf("%d\n",ans);
    }
    return 0;
}
