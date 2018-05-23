#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
void printvector(vector <int> l);
int main()
{
	int n,t,temp;
	cin >> n >> t;
	map <int , vector<pair<int,int>>> table;
	int temp1,temp2,temp3;
	for(int i=1;i<7;i++)
	{
		vector <pair<int,int>> temp;
		map[i] = temp;
	}
	for(int i=0;i<n;i++)
	{
		cin >> temp1 >>temp2 >> temp3;
		map[temp1].append(make_pair(temp3,temp2));
	}
	int totcost = 0;
	int totqual = 0;
	vector <pair<int,int>> noi;
	int taken[7] = {0};
	for(int i=1;i<7;i++)
	{
		noi.append(make_pair(map[i].size(),i));
		sort(map[i].begin(),map[i].end());
		reverse(map[i].begin(),map[i].end());
	}
	sort(noi.begin(),noi.end());
	for(int k=1;k<7;k++)
	{
		if(noi[k] == 0)
		{
			cout << "0" << endl;
			return 0;
		}
	}
	int minqual = 10000000;
	for(int i=1;i<7;i++)
	{
		totcost = totcost + map[i][0].second;
		minqual = min(map[i][0].first , minqual);
		totqual = totqual + map[i][0].first;
	}	
	int iter = 0;
	while(totcost > t)
	{
		if(iter == 7)
		{
			iter = 6;
		}
		int j = noi[iter];	
		if(map[j][++taken[j]].qual > minqual)
		{
			tot = tot - map[j][taken[j]-1].second + map[j][taken[j]].second ;
		}
		else
		{
			iter++;
		}
	}
	cout << minqual << endl;
	return 0;
}

void printvector(vector <int> l)
{
	for(int i=0;i<l.size();i++)
	{
		cout << l[i] << endl;
	}
}




