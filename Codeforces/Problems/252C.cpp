#include<bits/stdc++.h>
#define N 100001
#define llint long long int
using namespace std;
int arr[N];
int m,temp;
llint d;
int C(int x,int y);
int solve(int n);
int search(int n);
int main()
{
	llint n;
	cin >> n >> d;
	m = n;	
	for(int i=0;i<n;i++)
		cin >> arr[i] ;
	llint ans = 0;
	for(int i=0;i<n;i++)
		ans = ans + solve(i);
	cout << ans << endl;	
}
int search(int p)
{
	int l=0;int r=m-1;
	p = p+d;
	int mid = (l+r)/2;
	while(l<=r)
	{
		if(arr[mid-1] <= p && arr[mid] >p)
			return mid-1;
		else if(arr[mid-1] < p && arr[mid] >=p)
			return mid;
		else if(arr[mid] > p)
			r = mid;
		else if(arr[mid] < p)
			l = mid;
		if(r-l == 1)
		{
			if(arr[l] >=p && arr[r] <=p)
				return l;
			else 
				return r;
		}
		mid = (l+r)/2;	
	}
}
int solve(int n)
{
	int p = search(arr[n]);
	cout<< n<<" "<<p << endl;
	if(p-n<2)
		return 0;
	return C(p-n+1,3);
}
int C(int n,int k)
{
	if(n-k < k)
		k = n-k;
	llint temp = 1;
	for(int i=0;i<k;i++)
	{
		temp = temp*(n-i);
		temp = temp/(i+1);
	}
	return temp;
}
