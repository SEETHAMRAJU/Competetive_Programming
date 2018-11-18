#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
int main()
{
	llint n;
	scanf("%lld",&n);
	llint temp1,temp2;
	vector <pair<llint,llint>> q;
	scanf("%lld%lld",&temp1,&temp2);
	llint A = temp1;
	llint G =0;
	vector <int> arr;
	arr.append(1);
	if(n == 1)
	{

		if(temp1< temp2)
			printf("A\n");
		else
			printf("G\n");
		return 0;
	}
	for(int i=1;i<n;i++)
	{
		scanf("%lld%lld",&temp1,&temp2);
		if(A<G)
		{
			A = A + temp1;
			arr.append(1);
			if(A-G > 500)
			{
				A = A - temp1;
				G = G + temp2;
				arr[i] = 2;
			}
		}
		else
		{
			G = G + temp2;
			arr.append(2);
			if(G-A > 500)
			{
				G = G - temp2;
				A = A + temp1;
				arr[i] = 1;
			}
		}
		q.append(make_pair(temp1,temp2));
	}
	if(G-A > 500 || G-A < -500)
	{
		printf("-1\n");
		return 0;
	}
	for(llint i=0;i<n;i++)
	{
		if(arr[i] == 1)
			printf("A");
		else
			printf("G");
	}
	printf("\n");
	return 0;
}





