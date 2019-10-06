
#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
ll s[N],p[N];
int main()
{
	IOS;
	ll n;
	cin >> n ;
	s[1] = 1;p[1] = 1;
	for(int i=2;i<=n;i++)
	{
		s[i] = s[i-1] + p[i-1];
		p[i] = s[i-1];
	}
	cout << s[n] + p[n] << endl;
	return 0;
}
