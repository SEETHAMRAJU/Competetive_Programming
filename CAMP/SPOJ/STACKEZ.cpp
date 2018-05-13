#include<iostream>
#include<stack>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	stack <long long int> s;
	int t;
	cin >> t;
	vector <int> answer;
	while(t>0)
	{
		int n;
		scanf("%d",&n);
		if(n == 1)
		{
			long long int temp;
			cin >> temp;
			s.push(temp);
		}
		else if(n==2)
		{
			if(!s.empty())
			{
				s.pop();
			}
		}
		else
		{
			if(!s.empty())
			{
				answer.push_back(s.top());
			}
			else
			{
				answer.push_back(0);
			}
		}
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		if(answer[i] != 0)
		{
			cout << answer[i] << endl;
		}
		else
		{
			cout << "Empty!" << endl;
		}
	}
	return 0;
}
