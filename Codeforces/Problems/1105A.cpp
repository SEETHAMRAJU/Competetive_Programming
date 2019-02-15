
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
	vector<int>arr;
	int n,temp;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		arr.append(temp);
	}
	sort(arr.begin(),arr.end());
	int sum =0 ;
	int p = arr[n/2];
	for(int i=0;i<n;i++)
	{
		if(p>arr[i])
			sum += max(p-1-arr[i],0);
		else
			sum += max(arr[i]-1-p,0);
	}
	cout << p << " " << sum << endl;

	return 0;
}
