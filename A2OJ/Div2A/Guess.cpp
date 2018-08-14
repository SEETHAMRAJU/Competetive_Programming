#include<bits/stdc++.h>
#define llint long long int
#define append push_back
using namespace std;
llint maxa(llint x,llint y);
llint mini(llint x,llint y);
int main()
{
	long long int n,x;
	long long int i,j;
	j = 2*1000*1000*1000;
	i = (-1)*j;
	string s,y;
	scanf("%lld",&n);
	while(n>0)
	{
		cin >> s;
		cin >> x;
		cin >> y;
		if(y.compare("N") == 0)
		{
			if(s.compare(">=") == 0)
			{
				j = mini(j,x-1);
			}
			else if(s.compare("<=") == 0)
			{
				i = maxa(i,x+1);
			}
			else if(s.compare(">") == 0)
			{
				j = mini(j,x);
			}
			else
			{
				i = maxa(i,x);
			}
		}
		else
		{
			if(s.compare(">=") == 0)
			{
				i = maxa(i,x);
			}
			else if(s.compare("<=") == 0)
			{
				j = mini(x,j);
			}
			else if(s.compare("<") == 0)
			{
				j = mini(j,x-1);
			}
			else
			{
				 i = max(x+1,i);
			}
		}
		n--;
	}
	if(i<=j)
		printf("%lld\n",i);
	else
		printf("Impossible\n");

	return 0;
}
llint mini(llint x,llint y)
{
	if(y<x)
		return y;
	return x;
}
llint maxa(llint x,llint y)
{
	if(y>x)
		return y;
	return x;
}



