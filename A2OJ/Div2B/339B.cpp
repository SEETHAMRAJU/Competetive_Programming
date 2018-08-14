#include<bits/stdc++.h>
#define append push_back
#define lli long long int
using namespace std;
int main()
{
	lli n,m,temp;
	cin >> n >> m;
	vector <int> q;
	lli count = 0;
	lli curr = 1;
	
	for(lli i=0;i<m;i++)
	{
		cin >> temp;
		if(temp >= curr) 
		{
			
			count = count + (temp - curr);
			curr = temp;
		}
		else
		{
			count = count + (n - curr + 1) + (temp - 1);
			curr = temp;
		}
	}

	cout << count << endl;
	return 0;
}





