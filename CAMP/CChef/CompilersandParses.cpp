#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
#include<stack>
#include<cmath>
using namespace std;
int solve(string str);
int main()
{
	int t;
	vector <int> answer;
	cin >> t;
	while(t > 0)
	{
		string str;
		cin >> str ;
		int temp = solve(str);
		answer.push_back(temp);
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}
	return 0;
}
int solve(string str)
{
	stack <char> s;
	int count = 0;
	s.push(str[0]);
	int i=0;
	char r[] = ">";
	char l[] = "<";
	while(i < str.size() - 1)
	{

		if(str[i] == r[0] && !(s.empty()))
		{
			if(s.top() == l[0])
			{
				cout << s.top() << " " << str[i] << " " << count << " " << i << endl;
				count++;
				s.pop();
			}
		}
		else
		{
			s.push(str[i]);
			cout << "Came here " << i << endl;
		}

		i++;
	}
	return 2*count;
}
