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
	int current_h = arr[0];
	int tot = arr[0];
	for(int i=1;i<n;i++)
	{
		if(current_h <= arr[i])
		{
			tot++;
			tot = tot + arr[i] - current_h;
			current_h = arr[i];
		}
		else
		{
			tot = tot + current_h - arr[i];
			tot++;
			current_h = arr[i];
		}
	}
	tot = tot + n;
	cout << tot << endl;
	return 0;
}





