
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
	int temp,t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		vector<int>a,b;
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			a.append(temp);
		}
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			b.append(temp);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		bool flag = true;
		for(int i=0;i<n;i++)
		{
			if(a[i] >= b[i])
			{
				flag = false;
				break;
			}
		}
		if(flag)
			cout << "WIN" << endl;
		else
			cout << "LOSE" << endl;
	}
	return 0;
}
