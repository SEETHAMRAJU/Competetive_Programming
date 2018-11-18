#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int r1,r2,c1,c2,d1,d2;
	scanf("%d%d%d%d%d%d",&r1,&r2,&c1,&c2,&d1,&d2);
	int a,b,c,d;
	a = (r1-c2+d1)/2;
	if((r1-c2+d1)%2 != 0)
	{
		printf("-1\n");
		return 0;
	}
	b = r1 - a;
	c = d2-b;
	d = r2 - c;
	if(a<1 || b <1 || c <1 || d<1 || a==b || a == c || a == d || b == c || b == d || c == d || a>9 || b > 9 || c>9 || d>9)
	{
		printf("-1\n");
		return 0;
	}
	if(a+b != r1 || a+c != c1 || a+d != d1 || b+c != d2 || b+d!= c2 || c+d != r2)
	{
		printf("-1\n");
		return 0;
	}
	printf("%d %d\n%d %d\n",a,b,c,d);
	return 0;
}





