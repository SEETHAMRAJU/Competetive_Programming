#include<bits/stdc++.h>
#define M 1000
using namespace std;
void update(int n,int N,int index);
int getsum(int index);
int bit[M],arr[M];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		update(arr[i],n,i);	
	}			
	int index;
	scanf("%d",&index);
	printf("%d\n",getsum(index));
	return 0;		
}
void update(int n,int N,int index)
{
	index++;
	while(index <= N)
	{
		bit[index] += n;
		index += index & (-index);
	}
	
}
int getsum(int index)
{
	int sum = 0;
	index++;
	while(index>0)
	{
		sum += bit[index];
		index = index - (index &(-index));
	}
	return sum;	
}
