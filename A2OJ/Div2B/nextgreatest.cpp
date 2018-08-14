#include<bits/stdc++.h>
#define append push_back
using namespace std;
vector <int> nextgreatest(vector <int> q,int n);
void pri(vector <int> l)
{
	for(int j=0;j<l.size();j++)
	{
		printf("%d ",l[j]);
	}
}
int main()
{
	int temp,n;
	scanf("%d",&n);
	vector <int> q;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		q.append(temp);
	}
	vector <int> p,l;
	p = nextgreatest(q,n);
	pri(p);
	reverse(q.begin(),q.end());
	printf("\n");
	l = nextgreatest(q,n);
	//reverse(l.begin(),l.end());
	pri(q);
	printf("\n");
	pri(l);
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




