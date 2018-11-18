#include<bits/stdc++.h>
#define append push_back
using namespace std;
vector <int> nextgreatest(vector <int> q,int n);
int main()
{
	int n,temp;
	vector <int> q,t;
	scanf("%d",&n);	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		q.append(temp);	
		t.append(temp);	
	}
	vector <int> f,b;
	f = nextgreatest(q,n);
	reverse(q.begin(),q.end());
	b = nextgreatest(q,n);
	reverse(b.begin(),b.end());
	for(int i=0;i<n;i++)
	{
		if(b[i]>=0)
			b[i] = n-1 - b[i];
	}
	reverse(q.begin(),q.end());
	for(int i=0;i<n;i++)
	{
		if(f[i] == -1)
			f[i] = n;
		if(b[i] == -1)
			b[i] = 0;
	}	
	int maxsofar = INT_MIN;
	for(int i=0;i<n;i++)
	{
		printf("%d %d %d\n",f[i],b[i],f[i]+b[i]-i+2);		
		maxsofar = max(f[i]+b[i]-i+2,maxsofar);	
	}
	printf("%d\n",maxsofar);	
	return 0;		

}
vector <int> nextgreatest(vector <int> q,int n)
{
	vector <int> p;
	for(int i=0;i<n;i++)
		p.append(0);
	stack <int> st;
	st.push(0);
	int i=1;
	while(i<n)
	{
		if(q[i] < q[st.top()])
			st.push(i);
		else
		{
			while((!st.empty()) && q[st.top()] < q[i])
			{
				p[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}
		i++;
	}
	while((!st.empty()))
	{
		p[st.top()] = -1;
		st.pop();
	}
	p[n-1] = -1;	
	return p;
}
