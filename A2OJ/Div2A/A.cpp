#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	while(k != 0)
	{
		if(n%10 < k)
		{
			k = k - n%10 - 1;
			n = n/10;
		}
		else
		{
			n = n - (k);
			k = 0;
			break;
		}
	}
	cout << n << endl;
	return 0;
}
