#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int main()
{
	int t,n;
	cin >> t;
	vector <long long int> a;
	long long int arr[120];
	int i=1;
	arr[0] = 1;
	while(i<100)
	{
		cout << i-1 << " " <<  arr[i-1] << endl;
		arr[i] = i*arr[i-1];
		i++;
	}
	while(t>0)
	{
		cin >> n;
		a.append(arr[n]);
		t--;
	}
	for(int i=0;i<a.size();i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}
