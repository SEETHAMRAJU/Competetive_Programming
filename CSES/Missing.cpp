
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
	ll temp;
	int n;
	cin >> n;
	ll sum = 0;
	for(int i=0;i<n-1;i++)
	{
		cin >> temp;
		sum -= temp;
		sum += i+1;
	}
	sum += n;
	cout << sum << endl;
	return 0;
}
