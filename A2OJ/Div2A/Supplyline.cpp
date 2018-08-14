#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[51];
int main()
{
	int n,k,m,temp;
	int i=0;
	scanf("%d%d%d",&n,&k,&m);
	vector <int> q;
	
	while(i<n)
	{
		scanf("%d",&temp);
		q.append(temp);
		i++;
	}
	sort(q.begin(),q.end());
	arr[n-1] = q[n-1];
	for(int i=n-2;i>=0;i--)
	{
		arr[i] = q[i] + arr[i+1];
		if(arr[i] - (i-n+2) + k  >= m)
		{
			printf("%d\n",i-n+2);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}





