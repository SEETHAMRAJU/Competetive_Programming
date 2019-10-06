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
	if(n==5)
	{
		cout << "0" << endl;
		return 0;
	}
	for(int i=5*n;i<5*(n+1);i++)
	{
		cout << i << " ";
	}
	return 0;
}
