#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	if(n%4 == 0)
	{
		cout << n/4 - 1 << endl ;
		return 0;
	}
	else if(n%2 == 0)
	{
		cout << int (n/4) << endl;	
		return 0;
	}
	cout << "0" << endl ;
	return 0;
}
