
#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
pair<int,int>solve(int sr,int sc,string q);
int main()
{
	IOS;
	//freopen("ans.txt","w");
	int t,n,r,c,sc,sr;
	cin >> t;
	int i=0;
	while(i<t)
	{
		cin >> n >> r >> c >> sr >> sc;
		string q;
		cin >> q;
		pair<int,int> ans =  solve(sr,sc,q);
		cout << "Case #" << i+1 <<": "<< ans.first << " " << ans.second << endl;
		i++;
	}
	return 0;
}
pair<int,int> solve(int sr,int sc,string q)
{
	set<pair<int,int>> arr;
	int i=0,x = sr,y=sc;
	arr.insert(make_pair(sr,sc));
	int temp = -1;
	while(i<q.size())
	{
		if(q[i] == 'N')
		{
			x -=1;
			temp = 1;
		}
		else if(q[i] == 'S')
		{
			x += 1;
			temp = 2;
		}
		else if(q[i] == 'E')
		{
			y += 1;
			temp = 3;
		}
		else if(q[i] == 'W')
		{
			y -= 1;
			temp = 4;
		}
		while(arr.find(make_pair(x,y)) != arr.end())
		{
			if(temp == 1)
				x -= 1;
			else if(temp == 2)
				x += 1;
			else if(temp == 3)
				y += 1;
			else if(temp == 4)
				y -= 1;
		}
		arr.insert(make_pair(x,y));			
		i++;
	}
	return make_pair(x,y);
}
