#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[1000000];
int cnt[1000001];
int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);
	int max1=INT_MIN;int max2=INT_MIN;
	int maxi1=0,maxi2=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
		if(max1<arr[i])
		{
			max2 = max1;
			max1 = arr[i];
			maxi2=maxi1;
			maxi1 = i;
		}
		cnt[arr[i]]++;
	}
	if(max2<0)
	{
		for(int i=0;i<n;i++)
		{
			if(i!=maxi1)
			{
				if(max2 < arr[i])
				{
					max2 = arr[i];
					maxi2 =i;
				}
			}
		
		}
	}
	int curs;
	int count=0;
	vector<int>ans;
	int temp1 = sum - max1;
	int temp2 = sum - max2;
	for(int i=0;i<n;i++)
	{
		curs = sum - arr[i];
		if(i!=maxi1)
		{
			if(temp1-arr[i] == max1)
			{
				count++;
				ans.append(i+1);
			}

		}
		else if(i == maxi1)
		{
			if(max2 == temp2-arr[i])
			{
				count++;
				ans.append(i+1);
			}
		}
	}
	printf("%d\n",count);
	if(count>0)
	{
		for(int i=0;i<count;i++)
			printf("%d ",ans[i]);
		printf("\n");
	}
	return 0;
}





