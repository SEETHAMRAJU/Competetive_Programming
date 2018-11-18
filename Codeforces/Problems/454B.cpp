#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,temp;
	cin >> n;
	vector <int> arr;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		arr.append(temp);
	}
	int k=0;
	int i=0;
	int count = 0;
	for(i=0;i<n-1;i++)
	{
		if(arr[i] > arr[i+1])
		{
			k = n - (i+1);
			i++;
			break;
		}
		else
		{
			count++;
		}
	}
	if(count == n-1)
	{
		cout << "0" << endl;
		return 0;
	}
	for(int j = i;j<n-1;j++)
	{
		if(arr[j] > arr[j+1])
		{
			cout << "-1" << endl;
			return 0;
		}
	}
	if(arr[n-1] > arr[0])
	{
		cout << "-1" << endl;
		return 0;
	}
	cout << k << endl;
	return 0;
}





