#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n;
	int temp1,temp2;
	scanf("%d",&n);
	vector <pair<int,int>> arr,arr2;
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&temp1,&temp2);
		arr.append(make_pair(temp2,temp1));
	}
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	int count = arr[0].first;
	int points = arr[0].second;
	int i=1;
	while(count >0 && i < n)
	{
		count--;
		points += arr[i].second;
		count += arr[i].first;
		i++;
	}
	printf("%d\n",points);
	return 0;
}





