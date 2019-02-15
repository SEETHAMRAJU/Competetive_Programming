#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int main()
{
	IOS;
	int t;
	cin >> t;
	while(t--)
	{
		int n,a,b;
		cin >> n >> b >> a;
		int alice=0,both=0,bob=0; ll p;
		for(int i=0;i<n;i++)
		{
			cin >> p;
			if(p%a == 0 && p%b == 0)
				both++;
			else if(p%a == 0)
				alice++;
			else if(p%b == 0)
				bob++;
		}
		if(both%2 == 0)
		{
			if(bob>alice)
				cout << "BOB" << endl;
			else
				cout << "ALICE" << endl;
		}
		else
		{
			if(bob+1 > alice)
				cout << "BOB" << endl;
			else
				cout << "ALICE" << endl;
		}
	}
	return 0;
}
