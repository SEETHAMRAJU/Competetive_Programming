#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
using namespace std;
int ans[300001];
int main()
{
	set<int>q;
	int n,m,l,r,x;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
		q.insert(i);
	for(int j=0;j<m;j++)
	{
		cin >> l >> r >> x;		
		set<int>::iterator it = q.lower_bound(l);
		vector<int>er;
		while(it!=q.end())
		{
			if(*it>r)
				break;
			if(*it != x)
			{
				er.append(*it);ans[*it]=x;
			}it++;
		
		}
		for(int i=0;i<er.size();i++)
			q.erase(er[i]);
	}
	for(int i=1;i<=n;i++)
		cout << ans[i] << " ";
	cout << endl;
	return 0;
}





