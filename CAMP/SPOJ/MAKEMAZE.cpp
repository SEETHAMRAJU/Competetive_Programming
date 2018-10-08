#include<bits/stdc++.h>
#define append push_back
using namespace std;
typedef struct pos
{
	int x,y;
}pos ;
int m,n,t;
int arr[21][21];
char s[21][21];
int eval[21][21];
int evaluate(pos p);
int main()
{
	scanf("%d",&t);
	vector <bool> answer;
	for(int o=0;o<t;o++)
	{
		memset(eval,0,sizeof(eval));
		memset(arr,0,sizeof(arr));
		scanf("%d %d",&n,&m);
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				cin >> s[j][k];
				if(s[j][k] == '.')
					arr[j][k] = 1;
				else
					arr[j][k] = 0;
			}
		}
		printf("Hola\n");
		int a=0,b=0;
		pos v;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(eval[i][j] == 0)
				{
					v.x = i;
					v.y = j;
					int l = evaluate(v);
					if(l == 2)
						a++;
					else if(l != 2 && l!= 0)
						b++;

				}
			}
		}
		if(a>0 || b!=1)
			answer.append(false);
		else
			answer.append(true);
	}
	for(int i=0;i<t;i++)
	{
		if(answer[i])
			printf("valid\n");
		else
			printf("invalid\n");
	}
	return 0;
}
int evaluate(pos v)
{
	queue<pos> q;
	pos l;
	int count=0;
	q.push(l);
	while(!q.empty())
	{
		l = q.front();
		q.pop();
		if(eval[l.x][l.y] == 0)
		{
			printf("l-> %d %d\n",l.x,l.y);
			eval[l.x][l.y] = 1;
			printf("%d %d\n",l.x,l.y);
			if(l.x == n-1 && l.y == 0 || l.x == m-1 && l.y == 0)
				count++;
			if(l.x<n-1 && arr[l.x + 1][l.y] == 1)
				q.push((pos){l.x+1,l.y});
			if(l.x>0 && arr[l.x-1][l.y] == 1)
				q.push((pos){l.x-1,l.y});
			if(l.y > 0 && arr[l.x][l.y-1] == 1)
				q.push((pos){l.x,l.y-1});
			if(l.y<m-1 && arr[l.x][l.y+1] == 1)
				q.push((pos){l.x,l.y+1});
		}
	}
	return count;
}




