#include<bits/stdc++.h>
#define append push_back
using namespace std;
long long int C(long long int N,int r);
int main()
{
	long long int n,m;
	long long int kmin,kmax;
	cin >> n >> m;
	if(m == 1)
	{
		long long int t = C(n,2);
		cout << t << " " << t << endl;
		return 0;
	}
	if(n/m == 1 && n%m == 0 || n < m)
	{
		cout << "0 0" << endl;
		return 0;
	}
	if(n%m == 0)
	{
		kmin = m * C(n/m,2);
		kmax = C(n - (m-1) , 2);
		cout << kmin << " " << kmax << endl;
	}
	else
	{
		long long int N,K,M;
		N = n/m;
		M = n%m;
		kmin = (m-M) * C(N,2) + (M) * C(N+1,2);
		kmax = C(n-(m-1),2);
		cout << kmin << " " << kmax << endl;
	}
	return 0;
}
long long int C(long long int n,int r)
{
	int i = 1;
	int fact = 1;
	long long int N =n;
	while(i<r)
	{
		N = (N * (n-i));
		i++;
		N = N/i;
	}
	
	return N;
}




