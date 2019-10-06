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
	int n,m;
	cin >> n >> m;
	if(n<m)
	{
		int ans = 0;
		while(n!=0 && m!=1)
		{
			m-=2;
			p++;
			n--;
		}
		while(n>1 && m>0)
		{
			p++;
			n-=2;
			m-=1;
		}
	}
	else
	{
			int ans = 0;
		while(n!=0 && m!=1)
		{
			m-=2;
			p++;
			n--;
		}
		while(n>1 && m>0)
		{
			p++;
			n-=2;
			m-=1;
		}		
	}
	return 0;
}
