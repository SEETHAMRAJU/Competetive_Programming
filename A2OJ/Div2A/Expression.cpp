#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()

using namespace std;
int max(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	return y;
}
int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	int a = (x+y)*z;
	a = max(a,x*y*z);
	a = max(a,(x*y)+z);
	a = max(a,x*(y+z));
	a = max(a,x+(y*z));
	a = max(a,x*y + z);
	a = max(a,x+y+z);
	cout << a << endl;
	return 0;
}
