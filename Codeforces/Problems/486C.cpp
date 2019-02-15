#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int arr[N];
int main()
{
	IOS;
	int p,n;string s;
	cin >> n >> p >> s;
	int left=0,right=0;
	if(p>n/2)
	{
		p = n-p+1;
		reverse(s.begin(),s.end());
	}
	p--;
	int ans = 0;
	if(p<n/4)
	{
		int i=p-1;
		while(i>=0)
		{
			int j = 2*i+(n&1);
			if(s[i]!=s[2*+(n&1)])
				ans += min(26-abs(s[i]-s[j]),abs(s[i]-s[j])) + 1;
			i--;
		}
		i = p+1;
		cout << p << endl;
		ans += p-1;
		while(i<n/2)
		{
			int j = 2*i + (n&1);
			if(s[i] != s[j])
				ans += min(26-abs(s[i]-s[j]),abs(s[j]-s[i])) + 1;
			i++;
		}
	}
	else
	{
		int i=p+1;
		while(i<n/2)
		{
			int j = 2*i+(n&1);
			if(s[i]!=s[2*+(n&1)])
				ans += min(26-abs(s[i]-s[j]),abs(s[i]-s[j])) + 1;
			cout << "hola" << endl;
			i++;
		}
		i = p-1;
		ans += (n/2)-p;
		while(i>=0)
		{
			int j = 2*i + (n&1);
			if(s[i] != s[j])
				ans += min(26-abs(s[i]-s[j]),abs(s[j]-s[i])) + 1;
			i--;
		}

	}
	cout << ans << endl;
	return 0;
}
