
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
	while(n>1)
	{
		cout << n << " ";
		if(n%2 == 0)
			n /= 2;
		else
			n = n*3 + 1;
	}
	cout << "1" << endl;
	return 0;
}
