#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(long double n,long double k,long double m);
int main()
{
	int t;
	cin >> t;
	vector <int> answer;
	while(t--)
	{
		long double n,k,m;
		cin >> n >> k >> m;
		answer.append(solve(n,k,m));
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}
	
	return 0;
}
int solve(long double n,long double k,long double m)
{
	long double M = m/n;
	long double K = k;
	int i=0;
	while(K <= M)
	{
		K = K * k;
		i++;
	}
	return i; 
}




