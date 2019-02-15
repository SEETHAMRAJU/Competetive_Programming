
#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int arr[1000];
int main()
{
	IOS;
	string s;int k,count=0;
	cin >> s >> k;
	string temp = "";
	int j = 0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == '?')
		{
			arr[max(j-1,0)] = 1;
			count++;
		}
		else if(s[i] == '*')
		{
			arr[max(-1+j,0)] = 2;
			count++;
		}
		else
		{
			temp += s[i];
			j++;
		}
	}
	bool flag = false;
	if(count == 0 && k != s.size())
	{
		flag = flag|1;
	}
	s = temp;
	string ans = "";
	count = k - s.size() + count;
	if(count<0 || flag)
	{
		cout << "Impossible" << endl;
		return 0;
	}
	for(int i=0;i<s.size();i++)
	{
		if(arr[i] == 0)
			ans += s[i];
		else if(arr[i] == 1)
		{
			if(count>0)
			{
				ans += s[i];
				count--;
			}
		}
		else if(arr[i] == 2)
		{
			while(count>0)
			{
				ans += s[i];
				count--;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
