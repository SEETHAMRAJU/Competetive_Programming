#include<bits/stdc++.h>
#define append push_back
#define N 1000000
using namespace std;
bool arr[N];
vector <int> prime;
map <int,vector<int>> p;
void setAll();
void sieve();
int solve(int a,int b);
int diff();
int c[N];
int main()
{
	int n;
	scanf("%d",&n);
	sieve();
	setAll();
	map<int,vector<int>> :: iterator itr;	
	vector <int> answer;
	/*for(itr = p.begin();itr != p.end();itr++)
	{
		printf("%d \n",itr->first);
	}*/
	for(int i=0;i<p[1063].size();i++)
	{
	//	printf("%d ",p[1063][i]);
	}	
	for(int i=0;i<n;i++)
	{
		int a,b;
		memset(c,0,sizeof(c));		
		scanf("%d %d",&a,&b);
		answer.append(solve(a,b));
	}
	
	for(int j=0;j<answer.size();j++)
		printf("%d\n",answer[j]);
	return 0;
}
int diff(int n1,int n2)
{
	string a,b;
	a = to_string(n1);
	b = to_string(n2);
	int count = 0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i] != b[i])
			count++;
	}
	if(count == 1)
		return 1;
	else
		return 0;
}
int solve(int a,int b)
{
	queue <int> q;
	q.push(a);
	int count=0;	
	int d[N];
	memset(d,0,sizeof(d));
	d[a] = 0;	
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		//printf("%d-> %d\n",u,d[u]);
		if(u ==b)
		{
			return d[u];
		}	
		if(c[u] != 1)
		{
			c[u] = 1;
			for(int i=0;i<p[u].size();i++)
			{
				if(c[p[u][i]] == 0)
				{	
					//if(u == 1733)
					//l	printf("%d ",p[u][i]);					
					d[p[u][i]] = d[u] + 1;					
					q.push(p[u][i]);
					c[p[u][i]] =2;
				}
			}
		}
		
	}	
	return -1;
}
void sieve()
{
	memset(arr,true,sizeof(arr));
	for(int i=2;i<N;i++)
	{
		if(arr[i])
		{
			for(int j=2;i*j<N;j++)
			{
				arr[i*j] = false;
			}
		}
	}	
	for(int i=1000;i<9999;i++)
	{
		if(arr[i])
		{
			prime.append(i);
			vector <int> o;
			p[i] = o;
		}
	}
}
void setAll()
{
	for(int i=0;i<prime.size();i++)
	{
				
		for(int j=i+1;j<prime.size();j++)
		{
			if(diff(prime[i],prime[j]))
			{
				p[prime[i]].append(prime[j]);
				p[prime[j]].append(prime[i]);
			}
		}
	}			
}

