#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int main()
{
	int64_t a,b;
	cin >> a >> b;
	int64_t bt,at;
	if(b%2 != 0)
		bt = (b)/2 + 1;
	else
		bt = b/2; 
	at = a/2;
	cout << (bt*bt) - (at*at) << endl;
	return 0;
}
/*
void printvector(vector <int> l)
{
	for(int i=0;i<l.size();i++)
	{
		cout << l[i] << endl;
	}
}



*/
