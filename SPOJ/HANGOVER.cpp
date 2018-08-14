#include<bits/stdc++.h>
#define append push_back
using namespace std;

int solve(float n);
int main()
{
	vector <int> answer;
	int t = 0;
	while(1)
	{
		float n;
		cin >> n;
		if(n == 0.00)
			break;
		else
			answer.append(solve(n));
		t++;
	}
	for(int i=0;i<t;i++)
	{
		
		printf("%d card(s)\n",answer[i]);
	}

	return 0;
}
int solve(float n)
{
	float p = 0.00;
	int i=1;
	while(p <= n)
	{
		p += 1.0/(i+1.0);
		i++;
	}
	return i-1;
}




