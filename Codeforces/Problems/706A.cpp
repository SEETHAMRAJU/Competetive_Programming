#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
double calctime(int a,int b,int x,int y,int v);
int main()
{
	int n,a,b,x,y,v;
	IOS;
	cin >> a >> b >> n;
	double ans = INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin >> x >> y >> v;
		ans = min(ans,calctime(a,b,x,y,v));
	}
	cout.precision(7);	
	cout << ans << endl;
	return 0;
}
double calctime(int a,int b,int x,int y,int v)
{
	double ans = (sqrt(pow(a-x+0.0,2) + pow(b-y+0.0,2)))/v;
	return ans;	
}

