#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int arr[n];
	for(int j=0;j<n;j++)
	{
		cin >> arr[j];
	}
	sort(arr,arr+n);
	if(arr[k] - arr[k-1] != 1)
	{
		if(arr[k-1] == arr[k])
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << arr[k-1] + 1 << endl;
		}
	}
	else
	{
		cout << "-1" << endl;
	}
	return 0;
}
