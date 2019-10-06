
#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll double
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int sum = 0;
int main()
{
	IOS;
	int t,n;
	int temp;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		ll sum = 0;
		cin >> n;
		vector<ll>q;
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			q.append(temp);
			sum += temp;
		}
		ll avg = (sum+0.0)/(n+0.0);
		bool flag = true;
		ll ans = 0,min=INT_MAX;
		for(int i=0;i<n;i++)
		{
			if(avg == (avg*n-q[i]-0.0)/(n-1.0))
			{	
				if(q[i]<min)
				{
					ans = 1+i;
					flag = false;
					min = q[i];
				}
			}
		}
		if(flag)
			cout <<"Impossible" << endl;
		else
			cout << ans  << endl;

	}
	return 0;
}
