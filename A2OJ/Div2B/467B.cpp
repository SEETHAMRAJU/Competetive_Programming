#include<bits/stdc++.h>
#define append push_back
using namespace std;
int countbits(long unsigned int n);
int main()
{
	int n,k,m;
	vector <int> player;
	int count = 0;
	cin >> n >> m >> k;
	long unsigned int temp;
	for(int i=0;i<m+1;i++)
	{
		cin >> temp;
		player.append(temp);
	}
	for(int i=0;i<m;i++)
	{
		if(countbits(temp^player[i]) <= k)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
int countbits(long unsigned int n)
{
	int count = 0;
	while(n)
	{
		count = count + (n&1);
		n = n >> 1;
	}
	return count;
}




