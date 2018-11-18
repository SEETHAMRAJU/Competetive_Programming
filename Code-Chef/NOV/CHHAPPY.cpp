#include<bits/stdc++.h>
#define append push_back
#define N 1000001
using namespace std;
int main()
{
	int t,n;
	int arr[N];
	scanf("%d",&t);
	for(int o=0;o<t;o++)
	{
		int n;
		scanf("%d",&n);
		memset(arr,0,sizeof(arr));
		map<int,vector<int>>p;				
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			if(p.find(arr[i]) != p.end())			
				p[arr[i]].append(i);
			else
			{
				vector<int>l;
				p[arr[i]] = l;
				p[arr[i]].append(i);
			}	
		}
		bool flag = false;
		int count;
		for(map<int,vector<int>>::iterator it=p.begin();it!=p.end();it++)
		{
			if(it->second.size() > 0)
			{
				count = 0;
				for(int j=0;j<it->second.size();j++)
				{
					if(p[it->second[j] + 1].size()>0)
						count++;
					if(count>=2)
					{
						flag = true;						
						break;
					}
				}
			}
			if(flag)
				break;		
		}
		if(flag)
			printf("Truly Happy\n");
		else		
			printf("Poor Chef\n");
	}

	return 0;
}

