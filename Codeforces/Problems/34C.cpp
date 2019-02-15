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
	set<int>p;
	string s;
	cin >> s;
	int i=0;
	string temp = "";
	while(i<s.size())
	{
		if(s[i]==',')
		{
			p.insert(atoi(temp));
			temp = "";
		}
		else
			temp += s[i];
	}
	vector<int>q;
	for(int i=0;i<s.size();i++)
	{
		q.append(s[i]);
	}
	sort(q.begin(),q.end());
	string answer = "";
	answer += to_string(q[0]);
	for(int i=1;i<q.size();i++)
	{
		if(q[i]-q[i-1] != 1)
			answer+="-"+to_string(q[i]);
	}
	
	return 0;
}
