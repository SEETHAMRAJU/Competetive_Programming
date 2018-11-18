#include<bits/stdc++.h>
using namespace std;
int req;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	//int i=n/m;
	/*while(i > 0)
	{
		req += i;
		i = i/m;
	}*/	
	n = n+((n-1)/(m-1));
	//if(n%m == 0)
	//	n += 1;
	printf("%d\n",n);
	return 0;

}

