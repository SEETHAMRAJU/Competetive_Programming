#include<bits/stdc++.h>
#define append push_back
using namespace std;

int main()
{
	int n,a,b,ans;
	scanf("%d%d%d",&n,&a,&b);
	if(abs(b-a) == 1)
		ans =1;
	if(a%2 != 0)
		a =a+1;
	if(b%2 != 0)
		b = b+1;
	a = a/2;
	b = b/2;
	
	return 0;
}





