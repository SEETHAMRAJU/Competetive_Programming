#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int>q;
	for(int i=1;i<=9;i++)
		q.insert(i);
	set<int>::iterator itr = q.find(4);
	set<int>::iterator itr1;
	for(;itr!=q.end();)
		{cout << *itr << endl;itr1 = q.find(*(++itr));q.erase(itr);itr = itr1;}//itr = q.find()}
	return 0;
}
