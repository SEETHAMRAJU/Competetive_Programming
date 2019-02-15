#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int ans[100005];
int main()
{
    int n,temp;
    vector<int>q;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        q.push_back(temp);
        arr[temp]++;
    }
    //vector<int>q;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            /*if(arr[i]+i != n)
            {
                printf("Impossible\n");
                return 0;
            }*/
	    if(i%2 == 0 && arr[i] == n && n%2 == 0)
	    {
		printf("Possible\n");
		int j=0;
		for(int i=0;i<n;i+=2)
		{
			printf("%d %d ",j+1,j+1);
			j++;
		}
		printf("\n");
		return 0;
		
	    }
	    else if(arr[i] + i != n)
	    {
		printf("Impossible\n");
		return 0;
	    }
        }
    }
    int j=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            ans[i]=j++;
        }
    }
    printf("Possible\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ans[q[i]]);
    }
    printf("\n");
    return 0;
}
