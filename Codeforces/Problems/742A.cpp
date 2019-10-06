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
	int arr[4];
	arr[0] = 6;
	arr[1] = 8;
	arr[2] = 4;
	arr[3] = 2;
	cout << arr[n%4] << endl ;
	return 0;
}
