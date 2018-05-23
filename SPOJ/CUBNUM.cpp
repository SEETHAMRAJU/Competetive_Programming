#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
void printvector(vector <int> l);
int solve(int x);
int main()
{
	vector <int> answer;
	int n;
	while(scanf("%d",&n)!= EOF)
	{
		answer.append(n);
	}
	for(int i=0;i<answer.size();i++)
	{
		int ans = solve(answer[i]);
		cout << "Case #" << i+1 << ": " << ans << endl;
	}
	return 0;
}

void printvector(vector <int> l)
{
	for(int i=0;i<l.size();i++)
	{
		cout << l[i] << endl;
	}
}
int solve(int n)
{
	double tn = n;
	double x;
	int m=0;
	while(tn >0)
	{
		x = floor(cbrt(tn));
		tn = tn - (x*x*x);
		m++;
	}
	return m;
}


