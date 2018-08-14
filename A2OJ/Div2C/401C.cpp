#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,z,n,k=0;
	scanf("%d%d",&n,&m);
	if(n>m+1 || 2*n +2 <m)
		printf("-1\n");
	else
	{
		while(n || m)
		{
			if(m>n && k<2 || z == 0)
			{
				z = 1;
				k++;
				m--;
			}
			else
			{
				n--;				
				k =0;
				z = 0;
			}
			printf("%d",z);
		}
	}
	printf("\n");
	return 0;
}
