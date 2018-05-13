#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cin >> arr[i];
	}
	std :: map <std :: string , int> sizetable;
	sizetable[std::("S")] = arr[0];
	sizetable[std::("M")] = arr[1];
	sizetable[std::("L")] = arr[2];
	sizetable[std::("XL")] = arr[3];
	sizetable[std::("XXL")] = arr[4];
	int n;
	cin >> n;

	return 0;
}
