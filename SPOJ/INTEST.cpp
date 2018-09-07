#include<bits/stdc++.h>
#define append push_back
using namespace std;
int cnt,n,k,p;
int main()
{
	scanf("%d%d",&n,&k);
	while(n>0)
	{
		scanf("%d",&p);
		
		if(p%k == 0)
		{
			cnt++;
		}
		n--;
	}
	printf("%d\n",cnt);
	return 0;
}





