#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()

using namespace std;

int main()
{
	unsigned int n,m;
	n = 2;
	m = 3;
	unsigned int x = 7;
	std::bitset<4> a(n^x);
	std::bitset<4> b(m^x);
	std::bitset<4> c((m+n)^x);
	cout << a << " " << b << endl;
	cout << c << endl;
	return 0;
}
