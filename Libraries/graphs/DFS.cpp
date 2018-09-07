#include<bits/stdc++.h>
#define append push_back
#define N 1000000
using namespace std;
/*
 *AdjLIst is an adjecency list i.e. a list woth pairs of its, onr representing node and another representing the weight of the edge.
 However we will just write the code based on the vertex adj list and also the array visited
 *
 * */
int visited[N];
void dfs(int s)
{
	visited[s] = 2;
	for(int i=0;i<AdjList[s];i++)
	{
		pair<int,int> p = Adj[s][i];
		if(visited[p.first] == 0)
		{
			DFS(p.first);			
		}
	}
	visited[s] = 1;
}
int main()
{


	return 0;
}





