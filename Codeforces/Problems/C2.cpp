#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
using namespace std;
int ans[SIZE];
int main()
{
	string temp = "";
	int n;
	string s;
	vector<string>p;
	scanf("%d",&n);
	vector<string>req,one;
	for(int i=0;i<2*n-2;i++)
	{
		cin >> s;
		if(s.size() == n-1)
			req.append(s);
		if(s.size() == 1)
			one.append(s);
		p.append(s);
	}
	string pre = "";
	pre += req[0];
	//pre += req[1][0];
	bool flag = true;
	for(int i=0;i<pre.size();i++)
	{
		temp += pre[i];
		flag = true;		
		for(int o=0;o<2*n-2;o++)
		{
//			cout << temp << " " << p[o] << " " << flag << " " <<ans[o]<< endl;
			if(p[o] == temp && ans[o] != 1)
			{
//cout << temp << " " << p[o] << " " << flag << " " <<ans[o]<< endl;
				ans[o] = 1;
				flag = false;
				break;
				//flag = false;
				//cout << temp << " " << flag << endl;
			}	
		}
	//	if(flag == true)
	//		break;		
	}
	//cout << pre << " " << flag << endl;
	if(flag)
	{
		memset(ans,0,sizeof(ans));
		pre = req[1];//+req[0][0];		
	for(int i=0;i<pre.size();i++)
	{
		temp += pre[i];
		flag = true;		
		for(int o=0;o<2*n-2;o++)
		{
			if(p[o] == temp && ans[o] != 1)
			{
				ans[o] = 1;
				break;
			}	
		}
	}

	}
	for(int i=0;i<2*n-2;i++)
	{
		if(ans[i] == 1)
			cout << 'P';
		else
			cout << 'S';
	}
	cout << endl;
	return 0;
}







