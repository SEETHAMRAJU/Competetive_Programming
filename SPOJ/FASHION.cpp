#include<bits/stdc++.h>

#define append push_back
using namespace std;
int main()
{
	int t;
	vector <int> answer;
	scanf("%d",&t);
	while(t>0)
	{
		int temp,n;
		vector <int> m,f;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			f.append(temp);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			m.append(temp);
		}
		sort(m.begin(),m.end());
		sort(f.begin(),f.end());
		int tot = 0;
		for(int i=0;i<n;i++)
		{
			tot += f[i]*m[i];
		}		
		answer.append(tot);		
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		printf("%d\n",answer[i]);
	}
	
	return 0;
}
