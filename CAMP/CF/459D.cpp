#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000001
using namespace std;
map<int,int>p;
int a[SIZE],arr[SIZE],b[SIZE];
int main()
{
	
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		p[arr[i]] = 0;
	}
	for(int i=0;i<n;i++)
	{
		p[arr[i]]++;
		a[i] = p[arr[i]];
	}
	for(int i=0;i<n;i++)
	{
		b[i] = p[arr[i]] - a[i] + 1;
	}
	map<int,int>q;
	for(int i=0;i<b[i];i++)
	{
		
	}
	
	return 0;
}





