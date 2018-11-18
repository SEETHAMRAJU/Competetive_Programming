#include<bits/stdc++.h>
#define llint long long int
#define append push_back
using namespace std;
llint solve(llint fa,llint fb,llint ta,llint tb);
llint n,h,a,b,k;
int main()
{
	scanf("%lld%lld%lld%lld%lld",&n,&h,&a,&b,&k);
	vector <llint> answer;
	for(llint i=0;i<k;i++)
	{
		llint fa,fb,ta,tb;
		scanf("%lld%lld%lld%lld",&ta,&fa,&tb,&fb);
		llint x = solve(fa,fb,ta,tb);
		answer.append(x);
	}
	for(llint i=0;i<k;i++)
	{
		printf("%lld\n",answer[i]);
	}
	return 0;
}
llint solve(llint fa,llint fb,llint ta,llint tb)
{
	if(ta == tb)
	{
		return abs(fa - fb);
	}
	else
	{
		llint time = 0;
		if(fa > b)
		{
			time += fa - b;
			time += abs(tb - ta);
			time += abs(b-fb);
		}
		else if(fa < a)
		{
			time += a -  fa;
			time += abs(tb - ta);
			time += abs(fb - a);
		}
		else
		{
			time += abs(ta-tb);
			time += abs(fb - fa);
			
		}
		return time;
	}
}




