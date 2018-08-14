#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int arr[3][3];
	int tot=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin >> arr[i][j];	
			tot = tot + arr[i][j];
		}
	}
	tot = (-1)*arr[1][0] + (-1)*arr[2][0] + arr[0][1] + arr[2][1];
	tot = tot + arr[0][2] + arr[1][2];
	int x[3];
	x[0] = tot/2;
	x[1] = arr[0][2] + arr[1][2] - x[0];
	x[2] = x[0] + arr[0][0] + arr[0][2] + arr[0][1] - arr[2][1] - arr[2][0];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i == j)
				cout << x[i] << " ";
			else
				cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}





