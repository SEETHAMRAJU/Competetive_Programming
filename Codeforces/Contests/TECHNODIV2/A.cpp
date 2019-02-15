#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n = s.size();
	string ans = "";
	if(n%2 == 1)
	{
		int i=n/2-2;int j=n/2+1;
		ans += s[n/2];
		while(i>-1 && j<n)
		{
			ans += s[j];
			ans += s[i];
			i--;
			j++;
		}
		cout << ans << endl;
	}
	else
	{
		int i = n/2-1;int j=n/2;
		while(i>-1 && j<n)
		{
			ans += s[i];
			ans += s[j];
			i--;
			j++;
		}
		cout << ans << endl;
	}
	return 0;
}
