#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	int flag = 0;
	int a=0;
	int b = 0;
	for(long long int i=0; i<n;i++)
	{
		if(a < 2)
		{
			if(a == 1)
			{
				b = 0;
			}
			cout << "a" ;
			a++;
		}
		else
		{
			if(b == 1)
			{
				a = 0;
			}
			cout << "b" ;
			b++;
		}
	}
	cout << "" << endl;
	return 0;
}
