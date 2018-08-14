#include<bits/stdc++.h>
#define append push_back
using namespace std;
string solve(int n);
int main()
{
	int t;
	scanf("%d",&t);
	vector <string> answer;
	while(t>0)
	{
		int n;
		scanf("%d",&n);
		string a = solve(n);
		answer.append(a);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}
	return 0;
}
string solve(int n)
{
	int i=0;
	string a = "";
	if(n == 1)
	{
		a += "a";
		return a;
	}
	if(n%2 == 0)
	{
		n = n/2 + 1;
		for(i=0;i<n/2;i++)
		{
			a += "a";
		}
		for(i;i<n;i++)
		{
			a += "b";
		}
	}
	else
	{
		n = (n+1)/2 + 1;
		for(i=0;i<n/2;i++)
		{
			a += "a";
		}
		a += "c";
		for(++i;i<n;i++)
		{
			a += "b";
		}
	}
	return a;
}
