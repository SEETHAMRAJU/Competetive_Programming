#include<bits/stdc++.h>
#define llint long long int
#define N 5000000
#define append push_back
using namespace std;
llint sovle(llint x,llint y);
llint primes[N];
void sieve();
llint check(llint n);
llint solve(llint x,llint y);
vector <llint> prime;
int main()
{
    llint t;
    sieve();
    vector <llint> ans;    
    scanf("%lld",&t);
    llint x,y;
    for(llint i=0;i<t;i++)
    {
        scanf("%lld%lld",&x,&y);
        ans.append(solve(x,y));
    }
    for(llint i=0;i<t;i++)
    {
        printf("%lld\n",ans[i]);
    }
}

void sieve()
{
    for(llint i=0;i<N;i++)
        primes[i] = true;
    for(llint i=2;i<N;i++)
    {
        if(primes[i])
        {
            for(llint j=2;i*j<N;j++)
            {
                primes[i*j] = false;
            }
        }
    }
    for(llint i=2;i<N;i++)
    {
        if(primes[i])
            prime.append(i);
    }
}
llint solve(llint x,llint y)
{
    
    llint req = 1;
    for(llint i=x;i>y;i--)
    {
        req = req*i;
    }
    llint i=0;
    llint ans = 0;
    while(req>1 && i<prime.size())
    {
            int a1 = 0;
            while(req%prime[i] == 0)
            {
                req = req/prime[i];
                a1++;
            }
            ans += a1;
           i++;
    }
    return ans;
}


