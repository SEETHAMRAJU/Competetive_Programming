#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int t;
	vector <double> answer;
	double r;
	scanf("%d",&t);
	int i=0;
	while(i<t)
	{
		scanf("%lf",&r);
		double ans = 4*r*r + 0.25;
		answer.append(ans);
		i++;
	}
	for(int i=0;i<t;i++)
	{
		printf("Case %d: %.2lf\n",i+1,answer[i]);
	}
	return 0;
}





