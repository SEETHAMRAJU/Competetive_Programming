#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int minimum(int x,int y);
int main()
{
	int n,m;
	cin >> n >> m ;
	int arr[m];
	for(int j=0;j < m ; j++)
	{
		cin >> arr[j];
	}
	sort(arr,arr + m);
	
	int least = arr[m-1] - arr[0];
	for(int k = 1 ; k <= m-n ; k++)
	{
		least = minimum (least,arr[k+n-1] - arr[k]);
	}

	cout << least << endl;
	return 0;
}
int minimum(int y,int x)
{
	if(x < y)
	{
		return x;
	}
	return y;
}
