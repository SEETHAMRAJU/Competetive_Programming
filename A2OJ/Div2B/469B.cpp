#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(vector <pair<int,int>> X, vector <pair<int,int>> Z, int t);
int main()
{
	vector <pair<int,int>> X,Z;
	int p,q,l,r,temp2,temp1;
	scanf("%d%d%d%d",&p,&q,&l,&r);
	for(int i=0;i<p;i++)
	{
		cin >> temp1 >> temp2;
		Z.append(make_pair(temp1,temp2));
	}
	for(int i=0;i<q;i++)
	{
		cin >> temp1 >> temp2;
		X.append(make_pair(temp1,temp2));
	}
	int tot = 0;
	for(int t=l;t<=r;t++)
	{
		if(solve(X,Z,t) == 1)
		{
			tot++;
			
		}

	}
	
	printf("%d\n",tot);	
	return 0;
}
int solve(vector<pair<int,int>> X,vector<pair<int,int>> Z,int t)
{
	int count = 0;
	int ncount = 0;
	for(int i=0;i<Z.size();i++)	
	{
		for(int j=0;j<X.size();j++)
		{
			if((Z[i].first >= X[j].first+t  && (X[j].second+t >= Z[i].first)&& ( (Z[i].first <= X[j].second + t) || X[j].second+t >= Z[i].second) ) || (Z[i].first <= X[j].first +t && (Z[i].second >= X[j].first+t) && ((Z[i].second <= X[j].second +t )||( Z[i].second >= X[j].second +t))))
			{
				count++;
			}
			else
			{
				ncount++;
			}
		}
	}
	if(count == 0)
	{
		return 0;
	}
	return 1;
}




