#include<bits/stdc++.h>
#define append push_back
#define SIZE 1000000
using namespace std;

int main()
{
	char c;
	int n;
	scanf("%d",&n);
	int arr[1000000][2];
	for(int i=0;i<n;i++)
	{
		cin >> c;
		cin >> arr[i][0];
		if(c=='|')
			arr[i][0] = 1;
		else if(c=='^')
			arr[i][0] = 2;
		else
			arr[i][0] = 3;
		//arr[i][1] = temp;
	}
	int ans[100];
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<2;j++)
		{

		}

	}
	
	return 0;
}





