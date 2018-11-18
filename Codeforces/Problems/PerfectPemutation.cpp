#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
void printvector(vector <int> l);
int main()
{
	int n;
	cin >> n;
	if(n%2 != 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		for(int i=n;i>0;i--)
		{
			cout << i << " "; 
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




