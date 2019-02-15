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
	int n,m,k;
	cin >> n >> m >> k;
	int count = 0;int total = 1;
	int tube = (n*m)/k;bool flag = false;
	flag = true;
	cout << tube << " ";
	for(int i=0;i<n;i++)
	{
		if(i%2 == 0)
		{
			for(int j=0;j<m;j++)
			{
				cout << i+1 << " " << j+1 << " ";
				count++;
				if(count == tube && total < k-1 && flag)
				{
					total++;
					cout << "\n" << tube << " " ;
					count = 0;
				}
				else if(count == tube && total == k-1 && flag)
				{
					flag = false;
					cout << "\n" << tube + (n*m)%k << " ";
					count = 0;
					total++;
				}
			}
		}
		else
		{
			for(int j=m-1;j>-1;j--)
			{
				cout << i+1 << " " << j+1 << " ";
				count++;
				if(count == tube && total < k-1 && flag)
				{
					total++;
					cout << "\n" << tube << " " ;
					count = 0;
				}
				else if(count == tube && total == k-1 && flag)
				{
					cout << "\n" << tube + (n*m)%k << " ";
					flag = false;
					total++;
					count = 0;
				}
			}

		}
	}
	cout << endl;
	return 0;
}
