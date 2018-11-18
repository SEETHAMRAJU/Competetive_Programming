#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r,a;
	scanf("%d%d%d",&l,&r,&a);
	int mi = min(l,r);
	int ma = max(l,r);	
	while(a>0 && mi != ma)
	{
		mi++;
		a--;
	}
	if(a>0)
		printf("%d\n",(mi+a/2)*2);
	else
		printf("%d\n",2*mi);
		
	return 0;
}
