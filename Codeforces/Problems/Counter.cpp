#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()

using namespace std;
void printvector(vector <int> l);
int main()
{
	int64_t l,r;
	cin >> l >> r;
	if(r-l <=1)
	{
		cout << "-1" << endl;
		return 0;
	}
	int64_t a;
	a = l;
	if(a%2 == 0)
	{
		cout << a << " " << a+1 << " " << a+2 << endl;
	}
	else
	{
		if(r-l > 2)
		
		{
			cout << ++a << " " << a+1 << " " << a+2 << endl;
			return 0;
		}
		cout << "-1" << endl;
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




