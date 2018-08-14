#include<bits/stdc++.h>
#define append push_back
#define M 1000000007
using namespace std;
long long int gcd(long long int x,long long int y);
map<int,int> solve(long long int m,long long int n);
int main()
{
	int t;
	vector < map <long long int,long long int> > answer;
	while(t--)
	{
		long long int m,n;
		cin >> m >> n;
		int *ans = solve(m,n);
		answer.append(ans);
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i].first << " " << answer[i].second << endl;
	}
	return 0;
}
map <int,int> solve(long long int m,long long int n)
{
	long long int tsum = 0;
	int i=0;
	long long int tpro = 1;
	while(i<n)
	{
	 	tsum = (tsum*m + 1)%M;
	 	tpro = (tpro * m)%M;
	 	i++;
	}
	int sum = (int) tsum;
	int pro = (int) tpro;
	long long int flag = gcd(tsum,tpro);
	if(flag == 1)
		return make_pair(sum,pro);
	else
	{
		tsum = (int) tsum%flag;
		tpro = (int) tpro%flag;
		return make_pair(sum,pro);
	}
	
}
long long int gcd(long long int x,long long int y)
{
	long long int p,q;
	p = max(x,y);
	q = min(x,y);
	x = p;
	y = q;
	long long int temp;
	while(x!=y || y!=0)
	{
		temp = y;
		y = x%y;
		x = temp;
	}
	return x;
}




