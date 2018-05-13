#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	cin  >> str;
	int i =0;
	int flag =0 ;
	string ans = "";
	while(i<str.size())
	{
		if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
		{
			if(flag != 0)
			{
				ans = ans + " ";		
			}
			i = i + 2;
		}
		else
		{
			ans = ans + str[i];
			flag++;
		}
		i++;
	}
	cout << ans <<endl;
	return 0;
}
