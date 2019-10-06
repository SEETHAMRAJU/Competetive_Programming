#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int q[N],arr[N],pi[N];
int main()
{
	IOS;
	int n,t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> q[i];
			pi[i] = -2;
		}
		arr[0] = q[0];
		arr[1] = max(q[1],q[0]);
		if(arr[1] != q[1])
			pi[1] = -1;
		for(int i=2;i<n;i++)
		{
			arr[i] = max(q[i],max(arr[i-1],q[i]+arr[i-2]));	
		
			if(arr[i] == arr[i-1])
			{
				pi[i] = -1;
			}
			else if(arr[i] == q[i] + arr[i-2])
			{
				pi[i] = i-2;
			}
		}
		for(int i=0;i<n;i++)
		{
			cout << arr[i] << "\t" << pi[i] << endl;
		}
		
	}
	return 0;
}
