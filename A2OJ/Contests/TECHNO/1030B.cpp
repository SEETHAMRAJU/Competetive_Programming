#include<bits/stdc++.h>
#define append push_back
using namespace std;
int n,m,d;
bool solve(int x,int y);
int E1(int x,int y);
int E2(int x,int y);
int main()
{
    int x,y;
    scanf("%d%d%d",&n,&d,&m);
    vector <int> answer;
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&x,&y);
        answer.append(solve(x,y));
    }
    for(int i=0;i<m;i++)
    {
        if(answer[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
int E1(int x,int y)
{
    return (x-y-d)*(x-y+d);
}
int E2(int x,int y)
{
    return (x+y-d)*(x+y-2*n+d);
}

bool solve(int x,int y)
{
    bool flag = true;
    if(E1(x,y)>0)
        flag = false;
    if(E2(x,y)>0)
        flag = false;
    return flag;    
}