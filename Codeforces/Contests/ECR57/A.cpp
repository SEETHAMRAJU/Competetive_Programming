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
	int t;
	cin >> t;
	while(t--)
	{
		cin >> l >> r;
		if(l==1)
			cout << l << " " << l+1 << endl;
		if(2*l<=r)
			cout << l << " " << 2*l << endl;
		
	}
	return 0;
}
