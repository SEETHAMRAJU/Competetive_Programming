#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(long unsigned int n,int k);
int main()
{
	int t;
	cin >> t;
	vector <int> answer;
	while(t--)
	{
		long unsigned int n;
		int k;
		cin >> n >> k;
		answer.append(solve(n,k));
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}

	return 0;
}
int solve(long unsigned int n,int k)
{
	int count = 0;
	long unsigned int m = n;
	while(m)
	{
		count  += m & 1;
		m = m>> 1;
	}
	int i=0;
	while(i < count-k)
	{
		n = n >> 1;
		i++;
	}
	return n;
}




