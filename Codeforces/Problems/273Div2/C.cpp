
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
	ll r,g,b,total =0;
	cin >> r >> g >> b;
	ll max1,max2,min1;max1 = max(b,max(r,g));min1 = min(b,min(r,g));max2 = r+g+b-max1-min1;
	ll req = 2*min1;
	req -= min(req,max2);
	max2-=min(req,max2);
	if(max2%2 !=0 )
	{
		req++;
		max2++;
	}
	
	
	return 0;
}
