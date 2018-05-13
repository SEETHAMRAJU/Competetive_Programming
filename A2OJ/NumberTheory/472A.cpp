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
	if(n%2 ==0)
	{

		if(n == 12)
		{
			cout << "4  8 "<< endl;
		}
		else
		{
			cout << "12  " << n-12 << endl ;
		}	
	}
	else
	{
		int arr[n];
		std::fill(arr,arr+n,1);
		arr[0] = -1;
		arr[1] = -1;
		for(int i =2;i*i <= n ;i++)
		{
			if(arr[i] == 1)
			{
				for(int j=2*i; j<= n;j+=i)
				{
					arr[j] = 0;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i] == 1)
			{
				arr[n - i] = 1;
			}
		}
		for(int j = 0;j<n; j++)
		{
			if(arr[j] == 0)
			{
				cout << j << " " << n - j << endl;
				return 0;
			}
		}
	}
	return 0;
}
