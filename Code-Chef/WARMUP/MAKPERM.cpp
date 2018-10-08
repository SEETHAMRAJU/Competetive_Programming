#include<bits/stdc++.h>
#define append push_back
#define llint long long int
#define N 1000001
using namespace std;
llint mini(llint x,llint y)
{
	if(x<y)
		return x;
	return y;
}
int arr[N];
int main()
{
	int t;
	vector <llint> answer;
	scanf("%d",&t);
	for(int r=0;r<t;r++)
	{
		int n;
		llint temp;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&temp);
			if(temp<n)
				arr[temp]++;
		}
		llint total = 0;
		for(int j=1;j<=n;j++)
		{
			if(arr[j] < 1)
				total++;
			arr[j] = 0;
		}
		answer.append(total);
	}
	for(int i=0;i<answer.size();i++)
		printf("%lld\n",answer[i]);
	return 0;
}





