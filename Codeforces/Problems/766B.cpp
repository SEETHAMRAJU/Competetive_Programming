#include<bits/stdc++.h>
#define append push_back
using namespace std;

int main()
{
	int temp,n;
	vector <int> q;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		q.append(temp);
	}
	sort(q.begin(),q.end());
	
	return 0;
}





