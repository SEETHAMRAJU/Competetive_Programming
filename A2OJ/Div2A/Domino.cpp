#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n;
	int count = 0;
	scanf("%d",&n);
	vector <pair<int,int>> q;
	int temp1,temp2;
	int sumd = 0;
	int sumu = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&temp1,&temp2);
		sumd += temp2;
		sumu += temp1;
		if((temp1+temp2)%2 == 1)
			count++;
	}
	if(sumd%2 != 0 && sumu%2 != 0)
	{
		if(count>0)
		{
			printf("1\n");
			return 0;
		}
	}
	else if(sumd%2 == 0 && sumu%2 == 0)
	{
		printf("0\n");
		return 0;
	}
	printf("-1\n");

	return 0;
}





