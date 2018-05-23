#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
	int n,temp;
	vector <int> arr;
	cin >> n;
	int board[n+1] = {0};
	for(int i=0;i<n/2;i++)
	{
		cin >> temp;
		arr.pb(temp);
		board[temp] = 1;
	}
	int tot = 0;
	queue <int> q;
	for(int i=1;i<n+1;i++)
	{
		if(i%2 == 0 && board[i] == 1 && i!= n)
		{
			q.push(i);
		}
		else if(i%2 != 0 && board[i] == 0 && !(q.empty()))
		{
			temp = q.front();
			q.pop();
			tot = tot + (i - temp);
		}
		if(i == n && board[i] == 1)
		{
				tot = tot + 1; 
		}
	}
	int tot2 = 0;
	for(int i=1;i<n+1;i++)
	{
		if(i%2 != 0 && board[i] == 1)
		{
			
			q.push(i);	
		}
		else if(i%2 == 0 && board[i] == 0 && !(q.empty()))
		{
			
			temp = q.front();
			q.pop();
			tot2 = tot2 + (i - temp);
		}
	}
	cout << min(tot2,tot) << endl;
}
