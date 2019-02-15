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
		string s;
		string ans = "";
		cin >> s;
		bool flag = true;
		int i=0,j=s.size()-1;
		while(i<j)
		{
			if(s[i]!=s[j])
			{ans = s;flag = false;}
			++i;
			--j;
		}
		if(flag)
		{
			for(int i=0;i<size()-1;i++)
			{
				if(s[i] != s[i+1])
				
			}
		}
	}
	return 0;
}
