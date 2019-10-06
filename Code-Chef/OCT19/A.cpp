
#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 900
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int x[N];
int main()
{
	IOS;
	int n,t,temp;
	cin >> t;
	while(t>0)
	{
		memset(x,0,sizeof(x));
		cin >> n;
		t--;
		int count = 0;
		deque<int>q;
		int ans=INT_MAX;
		int prev;
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			if(q.empty())
			{
				ans = temp;
				q.push_back(temp);
			}
			else if(q.size()==5)
			{
				q.push_back(temp);
				q.pop_front();
				deque<int>::iterator it;
				ans = INT_MAX;
				for(it = q.begin();it!=q.end();it++)
				{
					ans = min(*it,ans);
				}
				
			}
			else
			{
				ans = min(temp,ans);
				q.push_back(temp);
			}
			if(temp == ans)
			{
				x[temp]=1;
			}
			prev=temp;
		}
		for(int i=0;i<N;i++)
			count += x[i];
		cout << count << endl;
	}
	return 0;
}
