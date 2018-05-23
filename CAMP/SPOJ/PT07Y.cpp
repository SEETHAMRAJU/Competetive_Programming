#include<bits/stdc++.h>
#define append push_back
using namespace std;
int DFS(int s,list <int> *adj,int *c,int *pi,int n);
int main()
{
	int n,m;
	cin >> n >> m;
	list <int> *adj;
	adj = new list <int> [n+1];
	int temp1,temp2;
	for(int i=0;i<m;i++)
	{
		cin >> temp1>> temp2;
		adj[temp1].append(temp2);
		adj[temp2].append(temp1);
	}
	int *c,*pi;
	c = new int (n+1);
	pi = new int (n+1);
	int x = DFS(temp1,adj,c,pi,n);
	if(x)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	
	return 0;
}
int DFS(int s,list <int> *adj,int *c,int *pi,int n)
{
	c[s] = 2;
	list <int> :: iterator t;
	int i = 1;
	
	for(t = adj[s].begin();t != adj[s].end() ; t++)
	{
		if(c[*t] == 0)
		{
			pi[*t] = s;
			i = DFS(*t,adj,c,pi,n);
		}
		else if(c[*t] != 0)
		{
			if(pi[s] != *t)
			{
				return 0;
			}
		}
	}
	c[s] = 1;
	return i;
}




