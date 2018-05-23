#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	int ans = a-b;
	
	ans = (ans/10)*10 + ((ans%9)+1);
	cout << ans << endl;
	return 0;
}





