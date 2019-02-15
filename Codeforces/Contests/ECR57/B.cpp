#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 998244353  
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int cnt[27];
int main()
{
	IOS;
	int n;
	string s;
	cin >> n >> s;
	for(int i=0;i<n;i++)
/*		cout << s[i]-'a' << endl;*/
		cnt[s[i]-'a'+1]++;
		
	ll sum = 0;
	for(int i=1;i<=26;i++)
	{
		sum = sum +  (cnt[i])%M;
	}
	cout << sum << endl;
	return 0;
}
