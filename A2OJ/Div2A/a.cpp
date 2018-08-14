#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[11];
int main()
{
	int n;
	scanf("%d",&n);
	int Grig,And,gtot,atot;
	grig = 0;
	And = 0;
	atot = 0;
	gtot = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(i%2 == 0)
		{
			grig++;
			atot += arr[i];
		}
		else
		{
			And++;
			gtot += arr[i];
		}
	}
	if(atot )



	return 0;
}





