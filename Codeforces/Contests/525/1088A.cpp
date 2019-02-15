#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if((i/j)<x && i*j > x && i%j==0)
			{
				printf("%d %d\n",i,j);return 0;
			}
		}	
	}
	cout << "-1" <<endl;
	return 0;
}
