#include<bits/stdc++.h>
#define append push_back
using namespace std;
int solve(vector <int> p);
int main()
{
	int t;
	string p;
	scanf("%d",&t);
	vector <int> answer;
	for(int i=0;i<t;i++)
	{
		int n;
		vector <int> arr;
		scanf("%d",&n);
		cin >> p ;
		for(int i=0;i<p.size();i++)
			arr.append((int)p[i]);
		answer.append(solve(arr));
	
	}
	for(int i=0;i<t;i++)
	{
		if(answer[i] == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
int solve(vector<int> arr)
{
	int i=0;
	int j=arr.size()-1;
	while(i!=j && i<j)
	{
		if(arr[i] != arr[j])
		{
			int p = arr[i] - arr[j];
			if(p != 2 &&  p!=-2)
			{
				return -1;
			}
		}
		i++;
		j--;
	}
	return 1;
}





