#include<bits/stdc++.h>
#define llint long long int
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    vector <long long int> answer;
    while(t>0)
    {
        
        long long int n,temp;
        scanf("%lld",&n);
        vector <long long int> q,arr;
        for(long long int i=0;i<n;i++)
        {
            scanf("%lld",&temp);
            arr.push_back(0);
            q.push_back(temp);
        }
        llint count = 0;
        long long int tot = 0;
        llint cur = q[n-1];
        llint curri = n-1;
        for(llint i=n-2;i>=0;i--)
        {
            if(q[i] <= cur)
            {
               count++;
               tot += q[i];
            }
            else
            {
                arr[curri] = cur*count - tot;
                cur = q[i];
                count = 0;
                tot = 0;
                curri = i;
            }
        }
        arr[curri] = cur*count - tot;
        tot = 0;
        for(llint i=0;i<n;i++)
        {
            tot += arr[i];   
            
        }
        answer.push_back(tot);
        t--;
   
    }
    for(llint j=0;j<answer.size();j++)
    {
        printf("%lld\n",answer[j]);
    }
    return 0;
}
