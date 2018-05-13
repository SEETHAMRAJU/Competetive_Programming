#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
int maximum(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	return y;
}
using namespace std;
int main()
{
	long long int a,b,s;
	cin >> a >> b >> s;
	a = maximum(a,-a);
	b = maximum(b,-b);
	if(a==b && a == 0)
	{
		if(s%2 == 0)
		{
			cout << "Yes" << endl;
			return 0;
		}
		cout << "No" << endl;
		return 0;
	}
	if(a+b > s)
	{
		cout << "No" << endl;
		return 0;
	}
	else
	{
		s = s - a - b;
		if(s%2 == 0)
		{
			cout << "Yes" << endl;
			return 0;
		}

	}
	cout << "No" << endl;
	return 0;
}
