
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
		cout << n/2 << endl;
		for(int i=0;i<n/2 - 1;i++)
		{
			cout << "2 " ;
		}
		cout << "3" << endl;
	}
	else
	{
		cout << n/2 << endl;
		for (int i=0;i<n/2;i++)
		{
			cout << "2 ";

		}
		cout << " " << endl;
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




