#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	set<int>q;
	q.insert(1);
	q.insert(2);
	q.insert(4);
	q.insert(9);
	for(set<int>::iterator itr=q.begin();itr!=q.end();itr++)
		cout << *itr << endl;
	//q.insert(7);
	cout << " " << endl; 
	set<int>::iterator itr = q.find(4);
	//;itr!=q.end();itr++)
	//{	cout << *itr << endl;
		q.erase(4);
		q.erase(9);
	cout << "After " << endl;
	for(set<int>::iterator itr=q.begin();itr!=q.end();itr++)
		cout << *itr << endl;	
	return 0;
}





