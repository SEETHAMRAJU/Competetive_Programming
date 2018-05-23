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
	vector <int> answer;
	while(t>0)
	{
		int n;
		cin >> n;
		int x = n/3;
		int y = n%3;
		while(x>0 && y%5 != 0 || y == 0)
		{
			x--;
			y = y + 3;
		}
		if(x<=0)
		{
			answer.append(-1);
		}
		else
		{
			answer.append(3*x);
		}
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << "Case " << i+1 << ": "<<answer[i] << endl;
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




