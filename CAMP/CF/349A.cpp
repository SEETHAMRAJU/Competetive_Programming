
#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()

using namespace std;
void printvector(vector <int> l);
int main()
{
	int n,temp;
	cin >> n;
	vector <int> a;
	for(int j=0;j<n;j++)
	{
		cin >> temp;
		a.append(temp);
	}
	int c[3] = {0};
	
	for(int i=0;i<n;i++)
	{
		if(a[i] == 25)
		{
			c[0]++;
		}
		else if(a[i] == 50)
		{
			if(c[0] <=0)
			{
				cout << "NO" << endl;
				return 0;
			}
			else
			{
				c[0]--;
				c[1]++;
			}
		}
		else
		{
			if(c[1] == 0 && c[0] <=2)
			{
				cout << "NO" << endl;
				return 0;
			}
			else
			{
				if(c[1] == 0)
				{
					c[0] = c[0] - 3;
				}
				else
				{
					if(c[0] == 0)
					{
						cout << "NO"<< endl;
						return 0;
					}
					else
					{
						c[0]--;
						c[1]--;
					}
				}
			}
		}
	}
	cout << "YES" << endl;
	return 0;
}

void printvector(vector <int> l)
{
	for(int i=0;i<l.size();i++)
	{
		cout << l[i] << endl;
	}
}




