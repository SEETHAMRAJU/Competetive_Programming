#include<bits/stdc++.h>
#define append push_back
using namespace std;

int luckydigits(int n);
int main()
{
	int m,n,temp;
	cin >> n >> m;
	vector <int> a;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		if (m >= luckydigits(temp))
			count++;
	}
	cout << count << endl;
	return 0;
}
int luckydigits(int n)
{
	int l;
	while(n>0)
	{
		if(n%10 == 7 || n %10 == 4)
		{
			l++;
		}
		n = n/10;
	}
	return l;
}




