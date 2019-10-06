#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int X[N],Y[N];
int main()
{
	IOS;
	int n,a,b;
	map<int,int>p;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a >> b;
		p.insert(make_pair(a,b));
	}
	map<int,int>::iterator itr;
	for(itr=p.begin();itr!=p.end();itr++)
	{
		X[itr->first]++;
		Y[itr->second]++;
	}
	ll ans = 0;
	for(int i=0;i<N;i++)
	{
		ans += (X[i]*(X[i]-1));
		ans += (Y[i]*(Y[i]-1));
		ans /= 4;
	}
	cout << endl;
	return 0;
}
