#include<bits/stdc++.h>
#define append push_back
#define pair make_pair
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	list <int> *adj;
	adj = new list <int> (n+1);
	int temp1,temp2;
	for(int i=0;i<m;i++)
	{
		cin >> temp1 >> temp2;
		adj[temp1].push_back(temp2);
		adj[temp2].push_back(temp1);
	}
	return 0;
}

