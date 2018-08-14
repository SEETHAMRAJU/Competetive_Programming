#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	double a,b,c,d;
	vector <double> answer;
	for(int i=0;i<t;i++)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		double s = (a+b+c+d)/2;
		double ans = sqrt((s-a)*(s-b)*(s-c)*(s-d));
		answer.append(ans);
	}
	for(int i=0;i<t;i++)
	{
		printf("%0.2lf\n",answer[i]);
	}
	return 0;
}





