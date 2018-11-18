#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,temp,m;
	scanf("%d%d",&n,&m);
	vector <int> arr;
	int flag = 0;
	for(int i=0;i<m;i++)
	{
		cin >> temp;
		arr.append(temp);
		if(arr[i] == 1 || arr[i] == n)
		{
			flag = 1;
		}
	}
	if(m>(n/2)+1)
		flag = 1;
	if(flag == 1)
	{
		printf("NO\n");
		return 0;
	}
	sort(arr.begin(),arr.end());
	flag = 0;
	for(int i=0;i<m-1;i++)
	{
		if(arr[i+1] - arr[i] == 1)
		{
			if(flag == 0)
				flag = 1;
			else if(flag == 1)
			{
				printf("NO\n");
				return 0;
			}
				
		}
		else
		{
			flag = 0;
		}
	
	}
	printf("YES\n");
	return 0;
}





