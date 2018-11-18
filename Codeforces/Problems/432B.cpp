#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,i;
	scanf("%d",&n);
	int *h,*o;
	h = new int [n];
	o = new int [n];
	int home[100001];
	for(int i=0;i<100001;i++)
	{
		home[i] = 0;
	}
	i = 0;
	while(i<n)
	{
		cin >> h[i] >> o[i] ;
		home[h[i]]++;
		i++;
	}
	vector <int> answer;
	int N = (n-1);
	for(int i=0;i<n;i++)
	{
		answer.append(N - home[o[i]]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d %d\n",2*N - answer[i],answer[i]);
	}
	return 0;
}
