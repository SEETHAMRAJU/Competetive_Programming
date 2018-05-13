#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,k;
	cin >> n >> k;
	k = k -1;
	// n is odd
	if((n-1)%2 == 0)
	{
		if(k > n/2 + 1)
		{
			k = k - n/2;
			cout << 2*k << endl;
		}
		else
		{
			cout << 2*k + 1 << endl;
		}
	}
	else
	{
		if(k > (n-1)/2)
		{
			k = k - (n-1)/2;
			cout << 2*k << endl;
		}
		else
		{
			cout << 2*k + 1 << endl;
		}
	}
	return 0;
}
