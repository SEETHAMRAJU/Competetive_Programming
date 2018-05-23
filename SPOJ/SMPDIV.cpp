#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
void printvector(vector <int> l);
int main()
{
	int t;
	cin >> t;
	vector <vector <int>> answer;
	while(t>0)
	{
		int x,n,y;
		cin >> n >> x >> y;
		int i=x;
		vector <int> temp;
		while(i<n)
		{
			if(i%y != 0)
				temp.append(i);	
			i += x;
		}
		answer.append(temp);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		for(int j=0;j<answer[i].size();j++)
		{
			cout << answer[i][j] << " ";
		}
		cout << "" << endl;
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




