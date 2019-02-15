#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
using namespace std;

int main()
{
	int n,temp;
	scanf("%d",&n);
	vector<int>q;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		q.append(temp);
	}
	sort(q.begin(),q.end());
	int sum =0;
	for(int i=0;i<n-1;i+=2)
	{
		sum += (q[i+1]-q[i]);
	}
	cout << sum << endl;

	return 0;
}





