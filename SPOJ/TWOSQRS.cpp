#include<bits/stdc++.h>
using namespace std;
bool solve(int64_t x)
{
	int64_t y;
	y = x/2;
	int64_t i=0;
	while(i*i <= y)
	{
		int64_t tobe = x - (i*i);
		if(floor(sqrt(tobe+0.0)) == ceil(sqrt(tobe+0.0)))
			return true;
		i++;
	}
	return false;
}
bool answer[101];
int main()
{
	int64_t t,x;
	scanf("%ld",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%ld",&x);
		answer[i] = solve(x);	
	}
	for(int i=0;i<t;i++)
	{
		
		if(answer[i])	
			printf("Yes\n");
		
		else
			printf("No\n");
	}
	return 0;
}
