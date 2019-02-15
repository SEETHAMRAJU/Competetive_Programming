#include<bits/stdc++.h>
#define N 100004
#define M 1000000007
using namespace std;
long long int arr[N];
long long int sum[N];
void solve(int k);
int main()
{
    int t,k,l,r;
    cin >> t >> k;
    solve(k);
    for(int i=0;i<t;i++)
    {
        cin >> l >> r;
        printf("%lld\n",(sum[r]-sum[l-1] + M)%M);
    }
    return 0;
}
void solve(int k)
{
    for(int i=0;i<k;i++)
        arr[i] = 1;
    for(int i=k;i<N;i++)
    {
        arr[i] = ((arr[i-1])%M + (arr[i-k])%M)%M;
    }
  
    for(int i=1;i<N;i++)
        sum[i] = (sum[i-1] + (arr[i])%M)%M;
	//cout << sum[93494] << " " << arr[93494] << endl;
}
