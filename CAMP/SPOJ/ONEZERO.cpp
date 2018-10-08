#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
vector <string> q;

void s();
llint po(llint x,llint n,llint m);
string solve(llint temp);
llint div(string s,llint n);

int main()
{
	llint t,temp;
	scanf("%lld",&t);
	s();
	cout << q.size() << endl;
	vector <string> answer;
	for(llint i=0;i<t;i++)
	{
		scanf("%lld",&temp);
		answer.append(solve(temp));
	}
//	cout << div("10000",3) << endl;
	for(llint i=0;i<t;i++)
		cout << answer[i] << endl;
	return 0;
}
void s()
{
	q.append("0");
	q.append("1");
	llint cur = 1;
	while(q[q.size()-1].size() < 25)
	{
		q.append(q[cur]+"0");
		q.append(q[cur]+"1");
		cur++;
	}
}
string solve(llint temp)
{
	for(llint i=1;i<q.size();i++)
	{
		if(div(q[i],temp))
			return q[i];
	}
	return "-1";
}
llint div(string s,llint n)
{
	llint ans = 0;
	llint m = s.size();
	for(llint i=0;i<m;i++)
	{
		ans = ((ans*10) + (s[i]-'0'))%n;
	}
	if(ans%n == 0)
		return true;
	return false;
}
llint po(llint x,llint n,llint m)
{
	llint res = 1;
	while(n>0)
	{
		if(n%2 == 1)
		{
			res = (res*x)%m;
		}
		n=n/2;
		x = (x*x)%m;
	}
	return res%m;
}
