#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin >> x >> y;
	if(x*y > 0)
	{
		int tx,ty;
		tx = x+y;
		ty = x+y;
		if(tx<0)
		{
			cout << tx << " 0 " << "0 " << ty << endl ;
		}
		else
		{
			cout << "0 " << ty << " "<< tx << " 0" << endl ;
		}
	}
	else
	{
		int tx,ty;
		if(x<0)
		{
			tx = x - y;
			ty = y - x;
		}
		else if(y<0)
		{
			tx = y - x;
			ty = y - x;
		}
		if(tx<0)
		{
			cout << tx << " 0 " << "0 " << ty << endl;
		}
		else
		{
			cout << "0 " << ty << " "<<tx << " 0" << endl;
		}
	}
	return 0;
}
