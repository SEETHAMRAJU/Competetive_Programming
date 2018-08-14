#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,temp;
	scanf("%d",&n);
	vector <int> arr;
	i = 0;	
	while(i<n)
	{
		scanf("%d",&temp);
		arr.push_back(temp);
		i++;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i] < 0)
		{
			arr[i] = 0;
		}
	}
	int tot =0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] != 0)
			tot += arr[i];
	}
	printf("%d\n",tot);
	return 0;
}
