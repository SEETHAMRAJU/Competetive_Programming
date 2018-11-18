#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	string q;		
	cin >> q;
	vector<char> ans;
	vector<int> ansi;
	if(q.size() <26)
	{
		printf("-1\n");
		return 0;
	}	
	string answer = "abcdefghijklmnopqrstuvwxyz";
	int cur = 97;		
	int i=0;	
	while(i<q.size() && cur <123)
	{
		//cout << i <<"="<<q[i] <<" " << (i<q.size())<< endl;
		if(int(q[i]) <= cur)
		{
			cur++;
		//	cout <<q.size() <<" "<<cur << " " << q[i]  <<"->" << char(cur-1)<< " " << i << endl; 
		}
		i++;
	}
	if(cur <=122)
		printf("-1\n");
	else
		cout << answer << endl;	
	return 0;	
}
//jqcfvsaveaixhioaaeephbmsmfcgdyawscpyioybkgxlcrhaxs
