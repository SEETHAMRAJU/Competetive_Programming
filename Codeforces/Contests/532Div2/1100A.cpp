
#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int flag[101];
int arr[101];
int main()
{
	IOS;
	int n,k,soc=0,info=0;int answer = INT_MIN;
	cin >> n >> k;
	cover(flag,true);
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i]==1)
			info++;
		else
			soc++;
	}
	for(int i=0;i<n;i++)
	{
		if(flag[i])
		{
			int b = i;
			int info1 = info,soc1 = soc;
			for(int j=i;j<n;j+=k)
			{
		
				if(arr[j] == 1)
					info1--;
				else
					soc1--;
				flag[j] = false;
			}
			answer = max(answer,abs(info1-soc1));
		}
	}
	cout << answer << endl;
	return 0;
}
