#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
bool isPalin(string s)
{
	int i=0,j=s.size()-1;
	while(i<j)
	{
		if(s[i] != s[j])
			return false;
		i++;
		j--;
	}
	return true;
}
int main()
{
	IOS;
	string s;
	while(cin>>s)
	{
		string ans = s;string temp = "";
		bool flag = true;
		if(isPalin(s))
		{
			cout << s << endl;
			continue;
		}
		for(int i=s.size()-2;i>=0;i--)
		{
			if(flag)
			{
				if(s[i] != s[s.size()-1])
				{
					flag = false;
					temp += s[i];
				}
			}
			else
				temp += s[i];
		}
		ans+=temp;
		cout << ans << endl;
	}
	return 0;
}
