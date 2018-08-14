#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n;
	cin >> n;
	int tot = n;
	for(int i=2;i<n;i++)
	{
		int j=i;
		while(j<=n/i)
		{
			tot++;
			j++;
		}
	}
	cout << tot << endl;
	return 0;
}





