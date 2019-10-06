
#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
vector<int> arr;
map<int,int>p;
void add(int x)
{
	for(int i=0;i<arr.size();i++)
	{
		
		while(0 == x%arr[i])
		{
			p[arr[i]]++;
			x /= arr[i];
		}
	}
}
void check(char l)
{
	int x = l - '0';
	
	
	for(int i=1;i<=x;i++)
	{
		add(i);
	}
}
int main()
{
	arr.append(2);arr.append(3),arr.append(5);arr.append(7);
	IOS;
	for(int i=0;i<4;i++)
		p[arr[i]] = 0;
	int n;
	string s;
	cin >>n >> s;
	for(int i=0;i<n;i++)
	{
		check(s[i]);
	}
	string ans = "";
	for(int i=3;i>-1;i--)
	{
		while(p[arr[i]] != 0)
		{
			ans += to_string(arr[i]);
			for(int j=0;j<4;j++)
			{
				int answ = arr[j];
				int temp = 0;
				while((arr[i]/answ) > 0)
				{
					temp += arr[i]/answ;
					answ *= arr[j];
				}
				p[arr[j]] -= temp;
			}
		}
	}
	cout << ans << endl;
	
	return 0;
}
