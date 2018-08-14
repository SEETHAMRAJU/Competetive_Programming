#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,xi,yi,first,temp1,temp2;
	scanf("%d",&n);
	int minsofar = INT_MAX;
	scanf("%d",&temp1);
	first = temp1;
	int i=1;
	while(i<n)
	{
		scanf("%d",&temp2);
		if(abs(temp2-temp1) < minsofar)
		{
			xi = i-1;
			yi = i;
			minsofar =  abs(temp2-temp1);
		}		
		temp1 = temp2;
		i++;
	}
	if(abs(first - temp1) < minsofar)
	{
		xi = n-1;
		yi = 0;
	}
	printf("%d %d\n",xi+1,yi+1);
	return 0;
}





