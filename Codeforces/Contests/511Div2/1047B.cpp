#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
double maxa(double x,double y)
{
	if(x>y)
		return x;
	return y;
}
llint maxi(llint x,llint y)
{
	if(y>x)
		return y;
	return x;
}
llint absi(llint temp)
{
	if(temp<0)
		return -temp;
	return temp;
}
double distance(llint x,llint y);
int main()
{
	int n;
	scanf("%d",&n);
	llint ans,x,y;
	ans = INT_MIN;	
	vector<pair<llint,llint>> q;
	//double dist = INT_MIN;	
	for(int i=0;i<n;i++)
	{
		scanf("%lld %lld",&x,&y);
		//double m = distance(x,y);		
		//dist = maxa(dist,m);
		//printf("x->%lld y->%lld %lld\n",x,y,m);		
		//if(dist == m)
		ans = maxi(x+y,ans);
	}
	printf("%lld\n",ans); 
}
double distance(llint x,llint y)
{
	double X = (double)x;
	double Y = (double)y;
	double ans = sqrt(X*X+Y*Y);
	return ans;
}
