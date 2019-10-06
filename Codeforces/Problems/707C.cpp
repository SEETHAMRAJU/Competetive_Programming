
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
	ll n;
	cin >> n;
	if(n<3)
	{
		cout << "-1" << endl;
		return 0;
	}
	ll a,b;
	
	if(n&1==1)
	{
		cout << (n*n - 1)/2 << " " <<(n*n+1)/2 <<endl;	
	}
	else
	{
		cout <<n*n/4 - 1 << " " <<n*n/4 + 1 << endl;
	}
	return 0;
}
