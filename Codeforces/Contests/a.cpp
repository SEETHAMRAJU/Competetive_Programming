#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[101];
int main()
{
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int p[2];
	p[0] = a;
	p[1] = b;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int i=0;
	int total = 0;
	int j=n-1;
	bool flag = true;
	while(i!=j && i<j) 
	{
		if(arr[i] != arr[j])
		{
			if(arr[i] == 2 || arr[j] == 2)
			{
				total += p[min(arr[i],arr[j])];
			}
			else
			{
				printf("-1\n");
				return 0;
			}
		}
		else if(arr[i] == arr[j] && arr[i] == 2)
		{
			total += 2*min(a,b);
			flag = false;
		}
		i++;
		j--;
	}
	if(i == j)
		total += min(a,b);
	printf("%d\n",total);	
	return 0;
}





