#include<bits/stdc++.h>
#define append push_back
using namespace std;
map<int,vector<int>> q;
string answer;
void put(string a,string b);
int bfs(int o,int n);
int co[101];
int main()
{
	int n;
	string f;
	for(int i=0;i<26;i++)
	{
		vector<int>o;
		q[i] = o;
	}
	string s,p;
	scanf("%d",&n);
	cin >> s;
	f = s;
	for(int o=1;o<n;o++)
	{
		cin >> p;
		put(s,p);
		s = p;
	}
	int ans;
	string temp = "";
	for(int i=0;i<26;i++)
	{
		if(q[i].size() != 0 && co[i] == 0)
		{
			ans = bfs(i,n);
			temp += answer;
			cout << temp << "->" << answer << endl;
			answer = "";
		}
	}
	int arr[26];
	memset(arr,0,sizeof(arr));
	if(ans == 1)
	{
		for(int i=0;i<answer.size();i++)
		{
			arr[answer[i]-'a'] =1;
		}
		string fin = "";
		for(int i=0;i<26;i++)
		{
			if(arr[i] == 0)
				fin = fin + char(i+97);
		}
		fin += answer;
		cout << fin << endl;
	}
	else
		printf("Impossible\n");
	return 0;
}
void put(string a,string b)
{
	int i = 0;
	int p = min(a.size(),b.size());
	while(a[i]==b[i] && i<p)
	{
		i++;
		
	}
	q[a[i] - 'a'].append(b[i]-'a');
}
int bfs(int o,int n)
{
	queue<int>s;
	s.push(o);
	int c[101];
	memset(c,0,sizeof(c));
	c[o] = 1;
	co[o]=1;
	while(!s.empty())
	{
		int u = s.back();
		s.pop();
		answer += char(u+97) ;
		for(int i=0;i<q[u].size();i++)
		{
			if(c[q[u][i]] != 0)
				return -1;
			else
			{
				s.push(q[u][i]);
				c[q[u][i]] = 1;
				co[q[u][i]] =1;
			}
		}
	}
	return 1;
}
