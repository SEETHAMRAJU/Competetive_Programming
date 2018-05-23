#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
#define lint int64_t
#define M 12345678901
using namespace std;
lint maxi(lint x,lint y);
lint solve(lint x);
int main()
{
	
	int64_t t;
	cin >> t;
	int64_t n;
	vector <int64_t> answer;
	while(t>0)
	{
		cin >> n;
		int64_t ans = solve(n);
		answer.append(ans);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}
	return 0;
}
int64_t solve(lint n)
{
	lint prev,c,sum;
	sum = 1;
	prev = 1;
	lint k = 1;
	lint prevfact = 1;
	while(k <= n/2)
	{
		c = ((n/2) - k + 1) * prev * ((n/2)+k);
		prevfact = maxi(1,prevfact * (2*k-1) * (2*k));
		prev = c;
		cout << c << " " << prevfact << endl;
		sum = (sum + (c/prevfact))%M;
		cout << sum <<"\t";
		k++;
	}
	cout << endl;
	return sum;
}

lint maxi(lint x,lint y)
{
	if(x>y)
	{
		return x;
	}
	return y;
}

