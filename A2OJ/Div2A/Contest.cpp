#include<bits/stdc++.h>
#define append push_back
using namespace std;
int points(int p,int t);
int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int M,V;
	M = points(a,c);
	V = points(b,d);
	if(M>V)
	{
		cout << "Misha" << endl;
	}
	else if(M < V)
	{
		cout << "Vasya" << endl;
	}
	else
	{
		cout << "Tie" << endl;
	}
	return 0;
}
int points(int p,int t)
{
	int a = (3*p)/10;
	int b = p - ((p/250)*t);
	return max(a,b);

}




