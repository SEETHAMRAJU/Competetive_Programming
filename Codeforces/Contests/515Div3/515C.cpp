#include<bits/stdc++.h>
#define append push_back
#define N 2000001
using namespace std;
int arr[N];
bool a[N];
int main()
{
	int n,q;
	int l=0;
	int r=1;
	char c;
	vector<int>answer;
	scanf("%d",&n);
	int count =0;
	for(int i=0;i<n;i++)
	{
		cin >> c >> q;
		if(c == 'L')
		{
			arr[q] = l--;a[q]= true;
		}
		else if(c == 'R')
		{
			arr[q] = r++;a[q] = false;
		}
		else
		//{
			//if(a[q])
				answer.append(min(arr[q]-l,r-arr[q]));
		/*	else
				answer.append(min(r-arr[q]-1,count-arr[q]-1));
		}*/
	}
	for(int i=0;i<answer.size();i++)
		printf("%d\n",answer[i]-1);
	
	return 0;
}





