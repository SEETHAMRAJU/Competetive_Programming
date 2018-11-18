#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
void printvector(vector <int> l);
int main()
{
	int n,c;
	cin >> n >> c;
	int temp;
	vector <int> arr;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		arr.append(temp);
	}
	
	int maxsofar = -1000;
	for(int i=1;i<n;i++)
	{
		
		if(arr[i-1] - arr[i] > maxsofar)
		{
			maxsofar = arr[i-1] - arr[i];
		}
	}
	maxsofar = max(0,maxsofar-c);
	cout << maxsofar << endl;
	return 0;
}

void printvector(vector <int> l)
{
	for(int i=0;i<l.size();i++)
	{
		cout << l[i] << endl;
	}
}




