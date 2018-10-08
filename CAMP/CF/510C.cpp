#include<bits/stdc++.h>
using namespace std;
map<char,vector<char>> p;
void put(string q,string t);
int main()
{
	int n;
	scanf("%d",&n);
	string q;
	string l = "abcdefghijklmnopqrstuvwxyz";
	for(int i=0;i<26;i++)
	{
		vector <char> o;
		p[l[i]] = o;
	}
	vector <string> ques;
	cin >> q;
	ques.append(q);
	for(int i=0;i<n-1;i++)
	{
		cin >> q;
		ques.append(q);
		put(q[i-1],q[i]);
	}
	return 0;
}
void put(string q,string t)
{
	if(q[0] != t[0])
	{
		p[q[0]].append(t[0]);
	}
	else
	{
		int i= 0;
		while(q[i] == t[i])
		{
			i++;
		}		
		p[q[i]].append(t[i]);
	}
}
