#include<bits/stdc++.h>
#define append push_back
#define M 10
using namespace std;
int solve(int a,long long unsigned int b);
int main()
{
	int t,a;
	scanf("%d",&t);
	long long unsigned int b;
	vector <int> answer;
	while(t>0)
	{
		cin >> a >> b;		
		int ans = solve(a,b);
		answer.append(ans);		
		t--;	
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%d\n",answer[i]);
	}
	return 0;
}
int solve(int a,long long unsigned int b)
{
	long long int res = 1;
	while(b>0)
	{
		if(b&1 == 1)
			res = (res*a)%M;
		b = b >> 1;
		a = (a *a)%sM;
	}
	return res;
}
