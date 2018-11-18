#include<bits/stdc++.h>
#define append push_back
#define N 101
using namespace std;
bool ispossible(int m,int total);
bool solve(string q);
int n;
int arr[N];
int main()
{
	string q;
	scanf("%d",&n);
	cin >> q;
	bool flag = solve(q);
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
bool solve(string q)
{
	int total=0;
	for(int i=0;i<q.size();i++)
	{
		arr[i] = q[i] - '0';
		total += arr[i];
	}
	vector <int> fact;
	if(total == 0)
		return true;
	for(int i=2;i<=total;i++)
	{
		//printf("hola");
		if(total%i == 0)
			fact.append(i);
	}
	for(int i=0;i<fact.size();i++)
	{
		if(ispossible(fact[i],total))
			return true;
	}
	return false;
}
bool ispossible(int m,int total)
{
	int req = total/m;
	int cur = 0;
	for(int i=0;i<n;i++)
	{
		cur += arr[i];
		if(cur==req)
			cur = 0;
		else if(cur > req )
			return false;
	//	printf("%d->%d",i,cur);
	}
	return true;
}




