//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector <int> swap(vector <int> l,int i,int j);
int main()
{
	int t;
	cin >> t;
	vector < vector <int> > answer;
	while(t>0)
	{

		int n;
		cin >> n;
		vector <int> given;
		int temp;
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			given.push_back(temp);	
		}
		int i = n-1;
		int flag = 0 ;
		while(i>0)
		{
			if(given[i] > given[i-1])
			{
				given = swap(given,i,i-1);
				i++;
				break;
				flag = 1;
			}
			i--;
		}
		while(i<n && flag == 1)
		{
			if(given[i] < given[i-1])
			{
				given = swap(given,i,i-1);
			}
			i++;
		}
		if(flag == 0)
		{
			vector <int> temp;
			temp.push_back(-1);
			answer.push_back(temp);
		}
		else
		{
			answer.push_back(given);
		}
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		for(int j=0;j < answer[i].size();j++)
		{
			cout << answer[i][j] ;
		}
		cout << "" << endl;
	}
	return 0;
}
vector <int> swap(vector <int> l,int i,int j)
{
	int temp;
	//swapping
	
	temp = l[j];
	l[j] = l[i];
	l[i] = temp;
	return l;
}
