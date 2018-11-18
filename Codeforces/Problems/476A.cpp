#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int x,y;
	int c=0;
	if(n<m)
	{
		cout << "-1" << endl;
		return 0;
	}
	if(n%2 == 0)
	{
		x = n/2;
		y = 0;
		while(((x+y)%m))
		{
			x--;
			if(x < 0 || c == n)
			{
				c = n;
				break;
			}
			y = y + 2;
			c++;
		}
		if(c>n)
		{
			cout << "-1" << endl;
			return 0;
		}
		cout << x+y << endl;
	}
	else
	{
		x = n/2;
		y = n%2;
		while(((x+y)%m != 0))
		{
			if(x<0)
			{
				c = n;
				break;
			}
			x--;
			y = y + 2;
			c++;
		}
		if(c>n)
		{
			cout << "-1" << endl;
			return 0;
		}
		cout << x+y << endl;
	}
	return 0;
}
