#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()

using namespace std;
int solve(int x)
{
	int answer = 0;
	while(x > 0)
	{
		answer = answer + x/5;
		x = x/5;
	}
	return answer;
}
int main()
{
	int n,temp;
	vector <int> p;
	cin >> n;
	int i=0;
	while(i<n)
	{
		cin >> temp;
		p.append(temp);
		i++;
	}
	vector <int> l;
	for(int i=0;i<n;i++)
	{
		temp = solve(p[i]);
		l.append(temp);
	}
	for(int j=0;j<n;j++)
	{
		cout << l[j] << endl;
	}
	return 0;
}
