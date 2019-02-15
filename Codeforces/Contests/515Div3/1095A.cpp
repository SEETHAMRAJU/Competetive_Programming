#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
int main()
{
	IOS;
	int n;
	int arr[11];
	arr[0] = 0;
	for(int i=1;i<=10;i++)
		arr[i] = arr[i-1] + i;
	cin >> n;
	string s;
	cin >> s;
	string  answer = "";
	int count = 0;
	for(int i=0;i<10 && arr[i]<n;i++)
	{
		answer += s[arr[i]];
	}
	cout << answer << endl;
	return 0;
}
