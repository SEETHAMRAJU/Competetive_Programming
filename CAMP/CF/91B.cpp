#include<bits/stdc++.h>
#define append push_back
#define ll long long int
#define SIZE 1000000
using namespace std;
ll arr[SIZE];
vector<ll> solve(int n);
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	vector<int>q = solve(n);
	for(int i=0;i<n;i++)
		printf("%lld ",q[i]);
	cout << endl;
	return 0;
}
vector<ll> solve(int n)
{


}





