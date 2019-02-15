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
	int n,m,temp;
	cin >> n >> m;
	vector<set<int>>q;
	for(int i=0;i<(m/n)+1;i++)
	{
		set<int> s;
		q.append(s);
	}
	string answer = "";
	bool flag = true;
	for(int i=0;i<m;i++)
	{
		flag = true;
		cin >> temp;
		for(int j=0;j<(m/n)+1;j++)
		{
			if(q[j].empty() || q[j].find(temp)==q[j].end())
			{
				q[j].insert(temp);
				if(q[j].size() == n)
				{
					answer+="1";
					flag = false;
				}
				break;
			}
		}
		if(flag)
			answer += "0";
	}
	cout << answer << endl;
	return 0;
}
