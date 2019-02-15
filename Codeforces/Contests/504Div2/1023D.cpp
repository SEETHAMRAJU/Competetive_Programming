#include <iostream>
#include <stack>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
	int n,q,o=0,oo=0;
	cin>>n>>q;
	int a[200010],b[200010];
	for(int i=1;i<=q;i++) 
		b[i]=0;
	stack<int> p;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==q) 
			o=1;
		if(!a[i]) 
		{
			oo=i+1; 
			continue;
		}
		if(b[a[i]]) 
		{
			cout<<"NO"; 
			return 0;
		}
		while(!p.empty()&&a[i]<p.top())
		{
			b[p.top()]=1;
			p.pop();
		}
		p.push(a[i]);
	}
	if(!o&&!oo) 
	{
		cout<<"NO"; 
		return 0;
	}
	cout<<"YES"<<endl;
	if(!o) 
		a[oo-1]=q;
	if(!a[0]) 
		a[0]=1;
	for(int i=1;i<n;i++) 
	{
		if(!a[i]) 
		{
			a[i]=a[i-1];
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
}

