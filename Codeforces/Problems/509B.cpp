#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,k,temp;
	cin >> n >> k;
	vector <int> q;
	int count = 0;
	int mx,mn;
	mx = -1000;
	mn = 1000;

	for(int i=0;i<n;i++)
	{
		cin >> temp;
		mx = max(mx,temp);
		mn = min(mn,temp);
		q.append(temp);
	}
	int req = mx - mn;
	if(req <= k)
	{
		printf("YES\n");
		for(int i=0;i<n;i++)
		{
			for(int j =0 ;j<q[i];j++)
			{
				if(j<k)
					printf("%d ",j+1);
				else
					printf("%d ",(j)%k +1);
			}
			printf("\n");
		}
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}





