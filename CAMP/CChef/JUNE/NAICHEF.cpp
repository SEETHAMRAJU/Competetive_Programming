#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	vector <double> answer;
	while(t>0)
	{
		int n,a,b,l;
		int arr[10010];
		vector <int> q;
		for(int i=0;i<10010;i++)
		{
			arr[i] = 0;
		}
		cin >> n >> a >> b;
		for(int i=0;i<n;i++)
		{
			cin >> l;
			arr[l]++;
			q.append(l);
		}
		double ans = (arr[a] / (n+0.0)) * (arr[b]/(n+0.0)) ;
		answer.append(ans);
		t--;
	}
	cout.precision(10);
	{
		for(int i=0;i<answer.size();i++)
		{
			printf("%.6f\n",answer[i]);
		}
	}
	return 0;
}





