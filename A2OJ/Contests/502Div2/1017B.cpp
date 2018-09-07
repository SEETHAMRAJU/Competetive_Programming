#include<bits/stdc++.h>
#define append push_back
#define llint long long int
using namespace std;
int main()
{
	llint n;
	string a,b;
	scanf("%lld",&n);
	cin >> a;
	cin >> b;
	llint count_ones = 0;
	llint zero_zero = 0;
	llint one_zero = 0;
	llint count_zero =0;
	for(int i=0;i<n;i++)
	{
		if(a[i] == b[i] && a[i] == '0')
		{
			count_zero++;
			zero_zero++;
		}
		else if(a[i] == '1' && b[i] != '0')
			count_ones++;
		else if(a[i] == '1' && b[i] == '0')
		{
			one_zero++;
			count_ones++;
		}
		else if(a[i] == '0')
		{
			count_zero++;
		}
	}
	//printf("%d %d %d %d\n",zero_zero,one_zero,count_zero,count_ones);
	printf("%lld\n",(zero_zero*count_ones) + (one_zero*count_zero) - (zero_zero*one_zero));
	return 0;
}





