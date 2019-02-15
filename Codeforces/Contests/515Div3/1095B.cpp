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
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	sort(arr,arr+n);
	int cur = arr[n-1]-arr[0];
	cout << min(arr[n-2]-arr[0],arr[n-1]-arr[1]) << endl;
	return 0;
}
