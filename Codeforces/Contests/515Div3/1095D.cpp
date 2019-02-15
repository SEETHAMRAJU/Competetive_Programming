#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define f first
#define s second
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
map<int,vector<int>>p;
vector<pair<int,int>>arr(N);
vector<vector<int>>q(N);
int c[1000000];
void dfs(int s);
int main()
{
	IOS;
	int x,y,n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		vector<int>o;
		p[i] = o;
	}
	for(int i=0;i<n;i++)
	{
		cin >> x >> y;
		arr[i] = make_pair(x,y);
		q[x].append(i);
		q[y].append(i);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[q[i+1][0]].f == arr[i].s || arr[q[i+1][0]].s == arr[i].s)
		{
			int temp = arr[i].f;
			arr[i].f = arr[i].s;
			arr[i].s = temp;
		}
		else if(arr[q[1+i][1]].f == arr[i].s || arr[q[i+1][1]].s == arr[i].s)
		{
			int temp = arr[i].f;
			arr[i].f = arr[i].s;
			arr[i].s = temp;
		}
		
	}
	for(int i=0;i<n;i++)
	{
		p[arr[i].f].append(arr[i].s);
	}
	dfs(1);
	//cout << c[1] << " " << c[2] << " " << c[3] << endl;
	for(int i=0;i<n;i++)
	{
		//cout << i << "-"<< endl;
		if(c[i+1]!=1)
			dfs(i+1);
	}
	cout << endl;
	return 0;
}
void dfs(int s)
{
	cout << s << " ";
	c[s]=1;
	for(int i=0;i<p[s].size();i++)
	{
		if(c[p[s][i]] != 1)
		{
			dfs(p[s][i]);
		}
	}
}
