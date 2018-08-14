#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,m,temp;
	scanf("%d%d",&n,&m);
	vector <int> a,b;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		a.append(temp);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&temp);
		b.append(temp);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int bP = n;
	bP = min(m,n);
	for(int i=bP;i>=0;i--)
	{
		int flag = 1;
		for(int j=0;j<i;j++)
		{
			if(a[j] > b[m-i+j])
				flag =0 ;

		}
		if(flag == 1)
		{
			printf("%d\n",n-i);
			return 0;
		}
	}
}





