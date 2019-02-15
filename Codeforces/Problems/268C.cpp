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
	int n,m;
	cin >> n >> m;
	//cout << min(n,m)+1 << endl;
	int x=0,y=min(n,m);
	cout << y+1 << endl;
	for(int i=0;i<min(n,m)+1;i++,x++,y--)
		cout << x << " " << y << endl;
	return 0;
}
