#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	vector <int> answer;
	while(t>0)
	{
		int n;

		scanf("%d",&n);
		if(n%2 == 0)
		{
			answer.append(n/2);
		}
		else
		{
			answer.append(n/2);
		}
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		string a = "1";
		while(answer[i] !=0)
		{
			a += "0";
			answer[i]--;
		}
		cout << "1 " << a << endl;
	}
	return 0;
}





