#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	
	int n;
	cin >> n;
	int arr[n];
	for(int f = 0;f < n;f++)
	{
		cin >> arr[f];
	}
	int maxsofar = -10;
	int k;
	for(int f=0;f<n;f++)
	{
		if(arr[f] != 0)
		{
			k = f;
			break;
		}
	}
	int count = 0;
	for(int f = k+1;f<n;f++)
	{
		if(arr[f] == 1)
		{
			count = 0;

		}
	}
	return 0;
}
