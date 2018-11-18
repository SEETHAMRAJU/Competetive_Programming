#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int d,st,temp1,temp2;
	scanf("%d%d",&d,&st);
	int total = st;
	vector <pair<int,int>> q;
	vector <int> arr;
	for(int i=0;i<d;i++)
	{
		scanf("%d%d",&temp1,&temp2);
		q.append(make_pair(temp1,temp2));
		arr.append(temp1);
		total = total - temp1;
	}
	int i=0;
	while(total!=0 && i<d)
	{
		total = total - q[i].second + q[i].first;
		arr[i] = q[i].second;
		while(total <0 && arr[i] > q[i].first)
		{
			total++;
			arr[i]--;
		}
		i++;
	}
	if(total ==0)
	{
		printf("YES\n");
		for(int i=0;i<d;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}





