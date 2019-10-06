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
	int n;
	cin >> n;
	int arr[N];
	int sum = 0,sum_n = 0;
	for(int i=0;i<2*n;i++)
	{
		cin >> arr[i];
		sum += arr[i];
		if(i<n)
			sum_n += arr[i];
	}
	if(sum%2 != 0 || sum != 2*sum_n)
	{
		for(int i=0;i<2*n;i++)
			cout << arr[i] << " ";
	}
	else
	{
		int flag = 0;int temp;
		int i=n-1;
		for(int j=0;j<n;j++)
		{	
			for(int i=n;i<2*n;i++)
			{
				if(sum_n - arr[j] +arr[i] != sum - sum_n - arr[i]+arr[j])
				{
					flag = 1;
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
					break;
				
				}
			}
			if(flag)
				break;
		}
	
		if(flag)
		{
			for(int i=0;i<2*n;i++)
				cout << arr[i] << " ";
		}
		else
			cout << "-1" << endl;
	}
	return 0;
}
