#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	double n,m;
	cin >> n >> m;
	
	double answer;
	double inter = pow((1.0/m),(log(n))/log(m));
	answer = (n * (1.0 - inter))/(1.0 - (1.0/m));
	cout << int(answer) + 1 << endl;
	return 0;
}
