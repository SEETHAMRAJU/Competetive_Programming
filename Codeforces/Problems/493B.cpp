#include<bits/stdc++.h>
#define append push_back
#define llint long long int 
using namespace std;
llint mini(llint x,llint y);
int main()
{
	llint temp,n;
	scanf("%lld",&n);
	llint tot=0;
	vector <llint> first,second;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		if(temp<0)
		{
			tot += temp;
			second.append((-1)*temp);
		}
		else
		{
			tot += temp;
			first.append(temp);
		}
	}
	if(tot>0)
	{
		printf("first\n");
		return 0;
	}
	else if(tot<0)
	{
		printf("second\n");
		return 0;
	}
	else
	{
		llint i=0;
		for(i=0;i<mini(first.size(),second.size());i++)
		{
			if(first[i] > second[i])
			{
				printf("first\n");
				return 0;
			}
			else if(second[i] > first[i])
			{
				printf("second\n");
				return 0;
			}
		}
		if(first.size() > second.size())
		{
			printf("first\n");
			return 0;
		}
		else if(second.size() > first.size())
		{
			printf("second\n");
			return 0;
		}
		else
		{
			if(temp <0)
			{
				printf("second\n");
				return 0;
			}
			else
			{
				printf("first\n");
				return 0;
			}
		}
	}

	return 0;
}
llint mini(llint x,llint y)
{
	if(x<y)
		return x;
	return y;
}




