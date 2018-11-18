#include<bits/stdc++.h>
#define append push_back
#define N 300
using namespace std;
int arr[N];
int logo(int n);
int main()
{
	int n,l,r;
	scanf("%d%d%d",&n,&l,&r);
	int a,b;
	int lo = logo(n);
	int i=0;
	while(a/2 != b/2 && a*b>1)
	{
		a = a/2;
		b = b/2;
		i++;
	}
	answer = i;
	/*a = max(l,r);
	b = min(l,r);
	if(a%2 == 1)
		a++;
	if(b%2 == 1)
		b++;
	int answer = (a-b)/2;
	if(a!=b)
	{
		answer = logo(answer);		
		answer+=2;
	}
	else
	{
		if(lo == 1)
			printf("Final!\n");
		else
			printf("1\n");
		return 0;
	}*/
	if(answer == lo)
		printf("Final!\n");
	else
		printf("%d\n",answer);
	return 0;
}
int logo(int x)
{
	int ans = 0;
	while(x>1)
	{
		x=x/2;
		ans++;
	}
	return ans;
}




