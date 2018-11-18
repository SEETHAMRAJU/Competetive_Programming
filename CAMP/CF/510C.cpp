#include<bits/stdc++.h>
#define append push_back
using namespace std;
map<int,vector<int>> q;
void put(string a,string b);
int dfs(int o);
stack<int>st;
int c[101];
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
	for(int o=1;o<n;o++)
	{
		cin >> p;
		put(s,p);
		s = p;
	}
	int temp;
	for(int i=25;i>=0;i--)
	{
		if(c[i] == 0)
		{		
			temp = dfs(i);
			if(temp == -1)
			{
				printf("Impossible\n");
				return 0;
			}		
		}
	}
	string ans = "";
	int arr[26];
	memset(arr,1,sizeof(arr));
	while(!st.empty())
	{
		temp = st.top();	
		ans += char(temp+'a');
		arr[temp]=1;
		st.pop();
	}
	cout << ans << endl;
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
	if(b[i]-'a' < 0)
	{
		q[0].append(0);
	}	
	else
		q[a[i]-'a'].append(b[i]-'a');
}
int dfs(int o)
{
	int ans=0;
	for(int i=0;i<q[o].size();i++)
	{
		if(c[q[o][i]] == 2)
			{return -1;}
		else if(c[q[o][i]] == 0)
		{	
			c[q[o][i]] = 2;
			ans = dfs(q[o][i]);	
			if(ans==-1)
				{return -1;}
		}
	}
	c[o] = 1;	
	st.push(o);
	return 1;	
}
