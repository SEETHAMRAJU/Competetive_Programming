#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	n = n - 10;
	if(n<10 && n >=2)
	{
		cout << "4" << endl;
	}
	else if(n ==11)
	{
		cout << "4" <<endl;
	}
	else if(n==10)
	{
		cout << "15" << endl;
	}
	else if(n<=0 || n > 11)
	{
		cout << "0" << endl ;
	}
	else
	{
		cout << "4" << endl;
	}
	return 0;
}
