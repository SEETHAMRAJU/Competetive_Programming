
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
	string s;
	map<string,int>p;
	for(int i=0;i<n;i++)
	{
		cin >> s;
		if(p.find(s) == p.end())
		{
			cout << "OK" << endl;
			p[s] = 1;
		}
		else
		{
			cout << s <<p[s] << endl;
			p[s+to_string(p[s])] = 1;	
			p[s]++;
		}
	}
	return 0;
}
