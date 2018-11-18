#include<bits/stdc++.h>
using namespace std;
#define append push_back
//void sieve()
int main()
{
	int n;
	scanf("%d",&n);
	if(n<4)
		
	for(int i=0;i<n-(n/2);i++)
		printf("1 ");
	for(int i=2;i<n;i+=1)
		printf("%d ",i);
	printf("\n");
	return 0;
}
