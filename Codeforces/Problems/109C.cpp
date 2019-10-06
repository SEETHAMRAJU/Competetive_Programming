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
	int n;
	cin >> n;
	int f=0,s=-1;
	while(4*f<n)
	{
		if((n - 4*f)%7 == 0)
		{
			s = (n-4*f)/7;
			break;
		}
		f++;
	}
	if((s==-1 && 4*f != n) || (f==0 && 7*s != n))
		cout << s << endl;
	else
	{
		string ans = "";
		while(f>0)
		{
			ans += '4';
			f--;
		}
		while(s>0)
		{
			ans += '7';
			s--;
		}
		cout << ans << endl; 
	}
	return 0;
}
