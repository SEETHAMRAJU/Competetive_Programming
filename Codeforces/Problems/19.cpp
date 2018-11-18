#include<iostream>
using namespace std;
int max(int x,int y);
int main()
{
	int n;
	cin >> n;
	int p = 0;
	for(int i=0;i<n;i++)
	{
		int x,y;
		int temp;
		cin >> x >> y;
		temp = (p-x) + y;
		p = max(p,temp);
	}
	cout << p << endl;
	return 0;
}
int max(int x,int y)
{
	if(x>y)
		return x;
	return y;
}
