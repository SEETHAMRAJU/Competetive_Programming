#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	unsigned int i;
	cin >> i;
	int count = 0;
	while(i)
	{
		i = i & (i-1);
		count++;
	}
	cout << count << endl;
	return 0;
}
