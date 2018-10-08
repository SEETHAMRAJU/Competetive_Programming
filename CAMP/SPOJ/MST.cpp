#include<bits/stdc++.h>
#define append push_back
#define llint long long int
#define N 10001
using namespace std;
llint c[N];
llint len[N];
llint n,m;
vector <vector<llint>> p;
llint solve();
void changec(llint n,llint m);
int main()
{
	llint a,b,d;
	for(llint i=1;i<N;i++)
		c[i] = i;
	scanf("%lld%lld",&n,&m);
	for(llint i=0;i<m;i++)
	{
		vector<llint> o;
		scanf("%lld%lld%lld",&a,&b,&d);
		o.append(d);
		o.append(a);
		o.append(b);
		p.append(o);
	}
	for(llint i=1;i<=n;i++)
	{
		len[i] = 1;
	}
	printf("%lld\n",solve());
	return 0;
}
llint solve()
{
	llint tot = 0;
	sort(p.begin(),p.end());
	for(llint i=0;i<p.size();i++)
	{
		if(c[p[i][1]] != c[p[i][2]])
		{
			tot += p[i][0];
			if(len[p[i][1]] < len[p[i][2]])
			{
				changec(c[p[i][1]],c[p[i][2]]);
				len[p[i][2]] += len[p[i][1]];
			}
			else
			{
				changec(c[p[i][2]],c[p[i][1]]);
				len[p[i][1]] += len[p[i][2]];
			}
		}
	}
	return tot;
}
void changec(llint a,llint b)
{
	for(llint i=1;i<=n;i++)
	{
		if(c[i] == a)
			c[i] = b;
	}
}




