#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double A,B,C;
	double wanted = a*b*c;
	A = sqrt(wanted/(b*b));
	B = sqrt(wanted/(c*c));
	C = sqrt(wanted/(a*a));
	int ans = 4*(A+B+C);
	printf("%d\n",ans);
	return 0;
}





