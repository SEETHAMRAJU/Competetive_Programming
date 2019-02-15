#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
using namespace std;

int main()
{
	int n;
	string s;
	scanf("%d",&n);
	bool flag = true;
	for(int i=0;i<n;i++)
	{
		cin >> s;
		flag = true;
		for(int j=0;j<s.size()-1;j+=2)
		{
			if(int(s[j]) + int(s[j+1]) != 131)
			{
				flag = false;
				break;
			}
		}
		if(!flag)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}





