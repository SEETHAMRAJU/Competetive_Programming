#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int N,temp;
	scanf("%d",&N);
	vector <int> q;
	int neg=0;
	int pos = 0;
	int er =0 ;
	vector <int> one,two,three;
	for(int i=0;i<N;i++)
	{
		scanf("%d",&temp);
		if(temp<0)
		{
			one.append(temp);
			neg++;
		}
		else if(temp >0)
		{
			three.append(temp);
			pos++;
		}
		else if(temp == 0)
		{
			two.append(temp);
			er++;
		}
	}
	for(int j=0;j<two.size();j++)
	{
		printf("%d",two[j]);
	}
	if(neg%2 == 0)
	{
		neg--;
		two.append(one.back());
		one.pop_back();
		er++;
	}
	if(pos == 0)
	{
		int t;
		three.append(one.back());
		three.append(two.back());
		one.pop_back();
		two.pop_back();
	}
	int n = one.size();
	printf("%d ",n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",one[i]);
	}
	n = three.size();
	printf("\n");
	printf("%d ",n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",three[i]);
	}
	n = two.size();
	printf("\n");
	printf("%d ",n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",two[i]);
	}
	printf("\n");
	return 0;
}





