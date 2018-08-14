#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,t,S;
	scanf("%d",&n);
	S = 0;
	while(n>0)
	{
		scanf("%d",&t);
		if(t>0)
			S += t;	
		n--;
	}
	printf("%d\n",S);
	return 0;
}
