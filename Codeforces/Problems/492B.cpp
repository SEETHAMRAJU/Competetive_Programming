#include<bits/stdc++.h>
#define append push_back
using namespace std;
double max(double x,double y)
{
	if(x>y)
		return x;
	return y;
}
int main()
{
	long long int n,l;
	vector <double> p;
	cin >> n >> l;
	double temp;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp;
		p.append(temp);
	}

	sort(p.begin(),p.end());
	double maxsofar =2*(p[0] - 0);
	for(int i=0;i<n-1;i++)
	{
		maxsofar = max( maxsofar , (p[i+1] - p[i]));
	}
	maxsofar = max(maxsofar,2*(l-p[n-1]));
	cout.precision(20);
	cout << (double)(maxsofar+0.0)/2.0 << endl;
	return 0;
}





