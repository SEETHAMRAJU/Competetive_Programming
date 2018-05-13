#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 0;
	int d[n][2];
	while(i < n)
	{
		cin >> d[i][0] >> d[i][1] ; 
		i++;
	}
	int hash[1000] = {0};
	for(int i=0;i<n; i++)
	{
		hash[d[i][0]] += 1;
	}
	int tot = 0;
	for(int i=0;i<n;i++)
	{

		if(hash[d[i][1]] != 0)
		{
			tot = tot + hash[d[i][1]];
		}
	}
	cout << tot << endl ;
	return 0;
}
