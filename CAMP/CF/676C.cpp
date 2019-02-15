#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
using namespace std;
int n,k;
int solve(string s,char c);
int main()
{
	string s;
	cin >> n >> k;
	cin >> s;
	int count = 0;
	char flag = 'a';char cur = 'z';int ans = 0;
	int answer=INT_MIN;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == 'a')
			count++;
		if(s[i] == cur)
			ans++;
		else
		{
			cur = s[i];
			answer = max(answer,ans);
			ans = 1;
		}
	}
	answer = max(answer,ans);
	if(k == 0)
	{
		printf("%d\n",answer);
		return 0;
	}
//	int answer;
	if(count == n-count)
	{
		answer = max(solve(s,'a'),solve(s,'b'));
		printf("%d",answer);
		cout << endl;
		return 0;
	}
	if(count > n - count)
	{
		flag = 'b';
	}
	printf("%d\n",solve(s,flag));
	return 0;
}
int solve(string s,char c)
{
	int ans = 0;
	vector<int>q;
	for(int i=0;i<n;i++)
	{
		if(s[i] == c)
			q.append(i);
	}
	
	int i=0;int temp=0;int maxtill = INT_MIN;
	k--;
	
	for(;i+k<q.size();i++)
	{
		if(i+k!=q.size()-1 && i != 0)
			temp = q[i+k+1] - q[i-1] - 1;//cout << q[i+k+1] << " " << q[i-1]<<endl; }
		else if(i+k == q.size()-1 && i == 0)
			temp = n;
		else if(i+k == q.size()-1)
			temp = n - q[i-1]-1;
		else
			temp = q[i+k+1]; 
		maxtill = max(maxtill,temp);
	}
	if(maxtill<0)
		maxtill = n;
	return maxtill;
}
