#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	vector <int> arr;
	int temp;
	for(int i=0;i<m;i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(),arr.end());
	n--;
	int minsofar = 100000;
	int i=0;
	while(i<m-n)
	{
		if(arr[i+n] - arr[i] < minsofar)
		{
			minsofar = arr[i+n] - arr[i];
		}
		i++;
	}
	cout << minsofar << endl;

	return 0;
}
