#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
#define M 1000000007
using namespace std;
void printvector(vector <int> l);
int64_t modulopower(int64_t x,int64_t n);
int main()
{
	int t;
	cin >> t;
	vector <int64_t> answer;
	while(t>0)
	{
		int64_t n;
		cin >> n;
		int64_t x = modulopower(2,n-1);
		answer.append(x);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}
	return 0;
}
int64_t modulopower(int64_t x,int64_t n)
{
	int64_t y = 1;
	while(n>0)
	{
		if(n%2 != 0)
		{
			y = (y*x)%M;
		}
		x = (x*x)%M;
		n = n/2;
	}
	return y;
}



