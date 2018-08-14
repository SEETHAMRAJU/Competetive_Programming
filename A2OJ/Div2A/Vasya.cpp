#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int k;
	char d;
	scanf("%d%s",&k,&d);
	string ans = "";
	if(d "0" && k>1)
	{
		printf("No solution\n");
		return 0;
	}
	ans += d;
	k--;
	while(k>0)
	{
		ans += "0";
		k--;
	}
	cout << ans << endl;
	return 0;
}





