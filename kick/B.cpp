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
	int t,r,c,k;
	cin >> t;
	int i=0;
	while(k<t)
	{
		int arr[302][302];
		cin >> r >> c >> k;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				cin >> arr[i][j];
		}
		dequeue<pair<int,int>>q;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				
			}
		}
		cout <<"Case #"<<i+1<<": " <<ans << endl;
		k++;
		
	}

	return 0;
}
