#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	if(n > 0)
	{
		cout << n << endl;
	}
	else
	{
		n = (-1)*n;
		if(n%10 >= (n/10)%10)
		{
			cout <<"-"<< n/10 <<endl;
		}
		else
		{
			if(n > 100 || n%10 != 0)
				cout << "-" << n%10 + (n/100)*10 << endl;
			else
				cout << "0" << endl;
		}
	}
	return 0;
}
