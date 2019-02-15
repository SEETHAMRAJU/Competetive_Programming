#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int main()
{
	IOS;
	ll n;
	bool flag=true;
	vector<string>q;
	char ans[N];
	string s,fir,sec;
	cin >> n;
	for(int i=0;i<2*n-2;i++)
	{
		cin >> s;
		q.append(s);
		if(s.size() == n-1 && flag)
		{	
			fir = s;
			flag = false;
		}
		if(s.size() == n-1 && !flag)
			sec = s;
	}
	string answer = "";
	//if(sec.substr(1,n-2) ==  fir.substr(0,n-3))
	//	answer += (sec+fir[n-2]);
	//else
	//	answer += (fir+sec[n-2]);
	string temp = "";
	flag = true;
	for(int i=0;i<n;i++)
	{
		temp += fir[i];
		for(int j=0;j<q.size();j++)
		{
			if(temp == q[j] && ans[j] !='P')
			{
				ans[j] = 'P';
				flag=false;
				break;
			}
		}
		if(flag)
		{
			break;
		}
	}
	if(flag)
	{
		cover(ans,' ');
		temp = "";
		for(int i=0;i)
			for(int i=0;i<q.size();i++)
			{
				temp += sec[i];
				if(temp == q[i] && ans[i]=='P')
				{
					ans[i] = 'P';
					flag
				}
			}
	}
	for(int i=0;i<2*n-2;i++)
	{
		if(ans[i] == 'P')
			cout << "P";
		else
			cout << "S";
	}
	cout << endl;
	return 0;
}
