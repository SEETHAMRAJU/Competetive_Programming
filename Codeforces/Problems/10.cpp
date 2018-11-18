#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <double> x;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		double temp;
		cin >> temp;
		x.push_back(temp);
	}
	vector <double> :: iterator j;
	double k;
	for(j = x.begin() ; j != x.end() ; j++)
	{
		k += (*j) / 100.0;		
	}
	k = k / n;
	cout << k*100 << endl;
	return 0;
}
