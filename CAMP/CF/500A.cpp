#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int temp;
	vector <int> arr;
	for(int i=0;i<n-1;i++)
	{
		cin >> temp;
		arr.append(temp);
	}
	int i=0;
	int present = 1;
	while(i < arr.size())
	{
		present = arr[i] + i + 1;
		if(present == m)
		{
			cout << "YES" << endl;
			return 0;
		}
		i = present-1;
		
	}
	cout << "NO" << endl;
	return 0;
}





