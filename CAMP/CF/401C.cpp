#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
void printvector(vector <int> l);
int main()
{
	int n,m;
	cin >> n >> m;
	if(m >= n-1 && m < 2*(n+1) + 1)
	{
		if(m-n == 1 || n-m == 1)
		{
			int flag;
			if(n-m == 1)
				flag = 0;
			else
				flag = 1;
			int i=0;
			while(i<n+m)
			{
				if(flag == 1)
				{
					cout << "1";
					flag = 0;
				}
				else
				{
					cout << "0";
					flag = 1;
				}
				i++;
			}
			cout << "" << endl;
			return 0;
		}
		
		int o = 0;
		int z = 0;
		int i=0;
		while(i<(n+m))
		{
			if(o < 2)
			{
				cout <<"1" ;
				o++;
				z--;
			}
			else if(z <= 0)
			{
				cout << "0";
				z = 1;
				o = 0;
			}
			i++;
		}
		cout << "" << endl;
	}
	else
	{
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




