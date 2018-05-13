#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,s;
	cin >> n >> m;
	int j = 0;
	/*while(s>0)
	{
		s = (n*m) - (n+m-1);
		cout << s << " " << n << " " << m << " " <<  endl;
		n--;
		m--;
		j++;
	}
	if(j%2 != 0)
	{
		cout << "Akshat" << endl ;
	}
	else
	{
		cout << "Malvika" << endl;
	}*/
	int temp = min(n,m);
	if(temp%2 == 0)
	{
		cout << "Malvika" << endl;
	}
	else
	{
		cout << "Akshat" << endl;
	}
	return 0;
}
