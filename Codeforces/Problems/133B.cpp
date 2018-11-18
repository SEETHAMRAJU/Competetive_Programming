#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	map <char,unsigned long long int> p;
	p['<'] = 1001;
	p['>'] = 1000;
	p[']'] = 1110;
	p['['] = 1111;
	p['+'] = 1010;
	p['.'] = 1011;
	p['-'] = 1100;
	p[','] = 1101;
	string a;
	cin >> a;
	unsigned long long int x;
	x = 0;
	for(int i=0;i<a.size();i++)
	{
		x << 4;
		x = x + p[a[i]];
	}
	cout <<  x << endl;
	return 0;
}





