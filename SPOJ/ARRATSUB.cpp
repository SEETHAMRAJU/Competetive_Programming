#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[1000001];
void maxksub(int n,int k);
int main()
{
	int k,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	maxksub(n,k);
	return 0;
}
void maxksub(int n,int k)
{
    deque <int>  Q(k);
    int i;
    for (i = 0; i < k; ++i)
    {
        while ((!Q.empty()) && arr[i] >= arr[Q.back()])
            Q.pop_back();  
        Q.push_back(i);
    }
    for ( ; i < n; ++i)
    {
	printf("%d ",arr[Q.front()]);
        while ( (!Q.empty()) && Q.front() <= i - k)
            Q.pop_front(); 
        while ( (!Q.empty()) && arr[i] >= arr[Q.back()])
            Q.pop_back();
        Q.push_back(i);
    }
    printf("%d\n",arr[Q.front()]);
}

