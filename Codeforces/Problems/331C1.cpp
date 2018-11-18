#include<bits/stdc++.h>
#define llint long long int
#define append push_back
using namespace std;
int getDigits(llint n);
llint solve(llint n);
int main()
{
	llint n;
	scanf("%lld",&n);
	printf("%lld\n",solve(n));
	return 0;
}
int getDigits(llint n)
{
	int maxi = INT_MIN;
	llint temp = n;
	llint m = 10;
	while(temp>0)
	{
		maxi = max(maxi,(int)(temp%10));
		temp = temp/10;
	}
	return maxi;
}
llint solve(llint n)
{
	llint count = 0;
	while(n>=10)
	{
		n = n - getDigits(n);
		count++;
	}
	if(n!=0)
		count++;
	return count;

}



