#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;

int main()
{
	llint t;
	vector <bool> answer;
	scanf("%lld",&t);
	while(t>0)
	{
		int64_t n,sum,temp;
		cin >> n;
		sum = 0;
		for(int64_t i=0;i<n;i++)
		{
			cin >> temp;
			sum = (sum +  temp)%n;
		}
		if(sum == 0)
			answer.append(true);
		else
			answer.append(false);
	
		t--;
	}
	for(llint i=0;i<answer.size();i++)
	{
		if(answer[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	
	
	return 0;
}





