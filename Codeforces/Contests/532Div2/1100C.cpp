#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define PI 3.14159265
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int main()
{
	IOS;
	double n,r;
	cout.precision(10);
	cin >> n >> r;
	double A,B;
	double temp = 360.0/n;
	A = sin(temp*PI/180);
	B = sin(((180-temp)/2)*PI/180);
	double k = A/B;
	cout << (k*r)/(2.0-k) << endl;
	return 0;
}
