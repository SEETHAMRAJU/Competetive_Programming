#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
using namespace std;

int main()
{
	int t,n,m;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d%d",&n,&m);
		string ans = "";
		for(int i=0;i<n;i++)
		{
			if(i<m)
				ans += char(97+i);
			else
			{
				ans += char(97+(i%m));
			}
		}
		cout << ans << endl;
	}
	return 0;
}





