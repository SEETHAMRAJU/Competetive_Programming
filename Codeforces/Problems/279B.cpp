#include<bits/stdc++.h>
#define append push_back
#define llint long long int 
using namespace std;
int longest_sb(int *arr,int n,long long t);
int main()
{
	int n;
	long long int t;
	int arr[100005];
	int sum = 0;
	cin >> n >> t;
	int i = 0,j = 0;
	int maxlen = 0;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i] <= t)
		{
			if(sum +arr[i] <= t)
			{
				sum = sum + arr[i];
				count++;
				maxlen = max(maxlen,count);
			}
			else
			{
				while(j<i && sum + arr[i] > t)
				{
					sum = sum - arr[j];
					count--;
					j++;
				}
				sum = sum + arr[i];
				count++;
				maxlen = max(maxlen,count);
			}
		}
		else
		{
			sum = 0;
			j = i+1;
			count = 0;
		}
	}
	printf("%d\n",maxlen);
	return 0;
}



