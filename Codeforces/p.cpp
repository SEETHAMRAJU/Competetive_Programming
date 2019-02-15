#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int arr[N];
int main()
{
	IOS;
	int n,k;
	cin >> n >> k;
	
	for(int i=0;i<n;i++)
		cin >> arr[i];
	sort(arr,arr+n);
	if(k == 0)
	{
		if(arr[0] != 1)
		{
			cout << arr[0]-1 << endl;
			return 0;
		}
	}
	else if(k!=0)
	{
		if(arr[k]-arr[k-1]>1)
		{
			cout << arr[k-1]+1 << endl;
			return 0;
		}
	}
	cout << "-1"<<endl;
	return 0;
}
