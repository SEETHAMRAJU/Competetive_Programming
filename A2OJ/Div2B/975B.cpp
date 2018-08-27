#include<bits/stdc++.h>
#define append push_back
using namespace std;
void pr(int arr[])
{
	for(int i=0;i<14;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
int main()
{
	int arr[14];
	int maxsofar = INT_MIN;
	int maxindex;
	for(int i=0;i<14;i++)
	{
		scanf("%d",&arr[i]);
	}
	int answer = INT_MIN;
	for(int i=0;i<14;i++)
	{
		int j=i+1;
		int tot = arr[i];
		int sofar = 0;
		int sarr[14];
		for(int k=0;k<14;k++)
			sarr[k] = arr[k];
		sarr[i] = 0;
		while(tot>0)
		{
			sarr[j]++;
			if(sarr[j] % 2 == 0)
			{
				sofar += sarr[j];
			}
			tot--;
			j++;
			
			if(j > 13)
				j = 0;
		}
		answer = max(sofar,answer);
	}
	printf("%d\n",answer);	
	return 0;
}





