
#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int main()
{
	IOS;
	ll n,m,a,p=1;
	cin >> n >> m >> a;
	cout << (((n/a)+min(p,n%a))*((m/a)+min(p,m%a))) << endl;
	return 0;
}
