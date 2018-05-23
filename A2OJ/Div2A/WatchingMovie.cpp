#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
void printvector(vector <int> l);
int main()
{
	int n,x;
	cin >> n >> x;
	int temp1,temp2;
	int last = 1;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin >> temp1 >> temp2;
		sum = sum + (temp1-last)%x + (temp2 - temp1 + 1);
		last = ++temp2;
	}
	cout << sum <<endl;
	return 0;
}

void printvector(vector <int> l)
{
	for(int i=0;i<l.size();i++)
	{
		cout << l[i] << endl;
	}
}




