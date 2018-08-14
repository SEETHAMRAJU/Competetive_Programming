#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(int n);
int i;
int main()
{
	int t,n;
	vector <int> answer;
	scanf("%d",&t);
	while(i<t)
	{
		scanf("%d",&n);
		answer.append(solve(n));	
		i++;	
	}
	i =0;
	while(i<t)
	{
		printf("%d\n",answer[i]);
		i++;	
	}
	return 0;
}

int solve(int n)
{
	int j = 2;
	float tot = n;
	while(j*j <= n)
	{
		if(n%j == 0)
		{
			while(n%j == 0)
				n/= j;
			tot *= (1.0 - (1.0/((float)j)));
		
		}
		j++;	
	}
	if(n>1)
		tot *= (1.0 - (1.0/(float)n));
	return (int) tot;
}
