#include<bits/stdc++.h>
#define append push_back
#define N 1000001
using namespace std;
int arr[N];
vector <int> solve();
int main()
{
    int n,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        arr[temp] = 1;
    }
    vector <int> ans = solve();
    for(int i=0;i<ans.size();i++)
        printf("%d ",ans[i]);
    printf("\n");
    return 0;
}
vector <int> solve()
{
        vector <int> ans;
        for(int i=1;i<N;i++)
        {
            if(arr[i] == 1)
            {
                for(int j=2;i*j<N;j++)
                {
                    arr[i*j] = 0;
                }
            }
        }
        for(int i=1;i<N;i++)
        {
            
		if(arr[i] == 1)
        	{	
		        ans.append(i);
			printf("%d ",i);		
		}        
	}
        return ans;
}
