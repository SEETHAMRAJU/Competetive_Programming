#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int temp;
	vector <int> q;
	while(1)
	{
		scanf("%d",&temp);
		if(temp != 42)
			q.append(temp);
		else
			break;	
	}
	for(int i=0;i<q.size();i++)
	{
		printf("%d\n",q[i]);
	}
	return 0;
}
