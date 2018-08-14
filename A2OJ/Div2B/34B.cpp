#include<bits/stdc++.h>
#define append push_back
using namespace std;

int main()
{
	int n,m,temp;
	scanf("%d%d",&n,&m);
	vector <int> a;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		a.append(temp);
	}
	
	sort(a.begin(),a.end());
	int tot = 0;
	int i=0;
	int answer = 0;
	while(i<m)
	{
		tot = tot + a[i];
		answer = max(answer,(-1)*tot);
		i++;
	}
	printf("%d\n",answer);
	return 0;
}





