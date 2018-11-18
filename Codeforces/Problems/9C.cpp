#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
vector<int> q;
int main()
{
	llint n;
	scanf("%lld",&n);
	q.push_back(0);
	q.push_back(1);
	int j=1;
	int cur=1;
	int total = 1;
	while(cur*10<=n)
	{
		q.push_back(cur*10);
		q.push_back(cur*10 + 1);
		if(cur*10 + 1 > n)
			{total++;break;}
		j++;
		cur = q[j];
		total+=2;
	}
	printf("%d\n",total);
	return 0;
}





