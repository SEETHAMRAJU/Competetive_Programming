#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[26];
int main()
{
	int n;
	scanf("%d",&n);
	char k[5] = {'a','e','i','o','u'};
	for(int i=0;i<5;i++)
	{
		arr[k[i]-'a'] = 1;
	}
	string p;
	cin >> p;
	string answer;
	char cur;
	cur = p[0];
	answer += p[0];
	int cnt = 0;
	for(int i=1;i<n;i++)
	{
		if(p[i] != cur)
		{
			answer += p[i];
			cur = p[i];
		}
		else if(p[i] == cur && arr[p[i]-'a'] != 1)
		{
			answer += p[i];
			cur = p[i];
		}
		else if(p[i] == cur)
		{
			cnt++;
			if(cnt<3)
				answer += p[i];
		}
	}
	cout << answer << endl;
	return 0;
}





