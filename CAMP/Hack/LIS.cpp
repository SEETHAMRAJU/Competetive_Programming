#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
    freopen("input1.txt","r",stdin);
    int temp,n;
    scanf("%d",&n);
    vector <int> d,l;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        d.append(temp);
        l.append(0);
    }
    l[0] = 1;
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(d[j] <= d[i])
            {
                l[i] = max(l[i],1+l[j]);                
            }
        }
	if(l[i] == 0)
		l[i] = 1;
    }
    int answer = INT_MIN;
    for(int i=0;i<n;i++)
    {
        answer = max(l[i],answer);

    }
    printf("%d\n",answer);
    return 0;
}
