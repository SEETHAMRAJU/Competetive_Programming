#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[101];
int main()
{
	int l,r,n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&l,&r);
		arr[l] = 1;
		arr[r] = -1;
	}
	bool flag = true;
	int count = 0;	
	vector <int> q;
	for(int i=1;i<=m;i++)
	{		
		arr[i] += arr[i-1];	
		//printf("%d %d\n",arr[i],arr[i] - arr[i-1]);	
	}
	for(int i=1;i<=m;i++)
	{
		if(arr[i] == 0)
		{
			 if(arr[i-1] != 1)
			 {
				 count++;
				 flag = false;
				 q.append(i);

			}	
		}	
	}
	if(flag)
		printf("0\n");
	else
	{
		printf("%d\n",count);
		for(int p=0;p<count;p++)
		{
			printf("%d ",q[p]);
		}
		printf("\n");
	}	
	return 0;
}
//  0 1 2 3 4	 5
//    1-1 0 0-1
//    1 0 0 0-1	
