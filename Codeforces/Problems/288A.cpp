
#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000007
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int arr[26],ans[N];
int main()
{
	IOS;
	int n,k;
	cin >> n >> k;
	int N = n;
	if(n<k || k<2)
	{
		cout << "-1" << endl;
		return 0;
	}
	for(int i=0;i<k;i++)
	{
		arr[i] += 1;
		n--;
	}
	for(int i=0;i<k && n!=0;i++)
	{
		if(n>N/2)
		{
			arr[i] += ; 
		}
	}
	return 0;
}
