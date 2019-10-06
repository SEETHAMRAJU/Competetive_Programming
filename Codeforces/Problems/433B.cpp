#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
vector<ll>q,a,b;
int arr[N],sor[N];
int main()
{
	IOS;
	int n;
	ll temp;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		q.append(temp);
	}
	ll N = pow(sqrt(n),2);
	generate_table(arr,q,N);
	ll m,l,r,t;
	cin >> m;
	for(int i=0;i<m;i++)
	{
		cin >> t >> l >> r;
		
		if(t == 1)
		{
			
			cout << query(arr,l,r) << endl;
		}
		else
		{
			cout << query(sor,l,r) << endl;
		}
	}
	return 0;
}
