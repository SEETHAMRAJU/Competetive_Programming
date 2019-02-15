#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
ll q[N],ans[5],a[5];
int main()
{
	IOS;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> q[i];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	ll total = 0;
	for(int i=0;i<n;i++)
	{
		total += q[i];
		for(int j=4;j>=0;j--)
		{
			if(a[j] <= total)
			{
				ans[j]+=(total/a[j]);
				total = total%a[j];
			}
		}
	}
	for(int i=0;i<5;i++)
		cout << ans[i] << " ";
	cout  <<endl<<total << endl;
	return 0;
}
