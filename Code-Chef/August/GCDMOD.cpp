#include<bits/stdc++.h>
#define M 1000000007
#define append push_back
#define llint long long int
using namespace std;
llint calci(llint a,llint n);
llint mini(llint a,llint b)
{
	if(a<b)
		return a;
	return b;
}
llint maxi(llint a,llint b)
{
	if(b>a)
		return b;
	return a;
}
llint calc(llint a,llint p,llint n);
llint gcd(llint a,llint b);
llint m(llint a)
{
	if(a>=0)
		return a;
	return -1*a;
}
int main()
{
	int t;
	vector <llint> answer;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		llint a,b,n;
		scanf("%lld%lld%lld",&a,&b,&n);
		llint p = m(b-a);
		if(p == 0)
			answer.append(calci(a,n) + calci(b,n));
		else{
			llint q = calc(a,p,n) + calc(b,p,n);
			answer.append(gcd(p,q)%M);
		}
	}
	for(int i=0;i<t;i++)
	{
		printf("%lld\n",answer[i]);
	}
	return 0;
}
llint calc(llint a,llint p,llint n)
{
	llint res= 1;
	while(n>0)
	{
		if(n%2 == 1)
		{
			res = res * a;
			res = res%p;
		}
		n = n/2;
		a = (a*a)%p;
	}
	return res%M;
}
llint calci(llint a,llint n)
{
	llint res= 1;
	while(n>0)
	{
		if(n%2 == 1)
		{
			res = res * a;
			res = res%M;
		}
		n = n/2;
		a = (a*a)%M;
	}
	return res%M;

}
llint gcd(llint a,llint b)
{
	llint p,q,temp;
	p = maxi(a,b);
	q = mini(a,b);
	while(q != 0)
	{
		temp = q;
		q = p%q;
		p = temp;	
	}
	return p%M;
}



