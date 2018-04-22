
#include<iostream>
#include<vector>
using namespace std;
vector <int> oddn(vector <int> a);
int sum(vector <int> a);
int main()
{	
	int n;
	vector <int> p;
	cin >> n;
	for(int i=0; i<n ; i++)
	{
		int temp;
		cin >> temp;
		p.push_back(temp);
	}
	int sumt = sum(p);
	vector <int> odd = oddn(p);
	int sumo = sum(odd);
	if(sumo%2 == 0)
	{
		cout << p.size() - odd.size() << endl;
	}
	else
	{
		cout << odd.size() << endl;
	}
	return 0;
}

int sum(vector <int> a)
{
	int sum = 0;
	vector <int> :: iterator i;
	for(i=a.begin() ; i != a.end() ; i++)
	{
		sum = sum + *i;	
	}
	return sum;
}
vector <int> oddn(vector <int> a)
{
	vector <int> temp;
	int o = 0;
	vector <int> :: iterator i;
	for( i = a.begin() ; i!= a.end() ; i++)
	{
		if((*i)%2 != 0)
		{
			temp.push_back(*i);
		}
	}
	return temp;
}
