#include<bits/stdc++.h>
#define append push_back
#define pi 3.141592653
using namespace std;
int main()
{
	int n,temp;
	scanf("%d",&n);
	vector <int> q;
	q.append(0);
	for(int i=0;i<n;i++)
	{
	
		scanf("%d",&temp);
		q.append(temp*temp);
	}
	sort(q.begin(),q.end());
	double tot = 0.0000;
	for(int i=n;i>0;i = i-2)
	{
		tot = tot + abs(q[i] - q[i-1]);
	}
	tot = tot * pi;
	printf("%.6lf\n",tot);

	return 0;
}





