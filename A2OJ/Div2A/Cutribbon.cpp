#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[5000] = {-1};
int maxi(int x,int y,int z);
int A,B,C;
int solve(int n);
int main()
{
	int n;
	cin >> n >> A >> B >> C;
	arr[0] = 0;
	for(int i=1;i<5000;i++)
	{
		arr[i] = -1;
	}
	int answer = solve(n);
	cout << answer << endl;
	return 0;
}
int solve(int n)
{
	if(n < 0)
		return -5;
	else if(arr[n] != -1)
		return arr[n];
	else
	{
		arr[n] = maxi(1+solve(n-A),1+solve(n-B),1+solve(n-C));
		return arr[n];
	}
}
int maxi(int x,int y,int z)
{
	if(x >=y && x >=z)
	{
		return x;
	}
	else if(y > x && y >= z)
	{
		return y;
	}
	return z;
}



