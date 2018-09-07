#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int t,s,n,x,a,b;
	vector <int> answer;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d%d%d",&n,&x,&s);
		int cur = x;
		for(int j=0;j<s;j++)
		{
			scanf("%d%d",&a,&b);
			if(a == cur)
				cur = b;
			else if(b == cur)
				cur = a;
		}
		answer.append(cur);
	}
	for(int i=0;i<answer.size();i++)
		printf("%d\n",answer[i]);
	return 0;
}





