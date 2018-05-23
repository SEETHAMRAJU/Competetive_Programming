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
		int64_t n;
		cin >> n;
		int64_t i=1;
		int64_t count = 0;
		while(i<n+1)
		{
			if(n%i == 0)
			{
				count = count + n;
			}
			else
			{
				count = count + (n/i)*i;
			}
			i++;
		}
		answer.append(count);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
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




