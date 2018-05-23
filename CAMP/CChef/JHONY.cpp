#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int t,temp;
	cin >> t;
	vector <int> answer;
	while(t>0)
	{
		vector <int> arr;
		int n,k;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> temp;
			arr.append(temp);
		}
		cin >> k;
		int req = arr[k-1];
		sort(arr.begin(),arr.end());
		for(int i=0;i<n;i++)
		{
			if(arr[i] == req)
			{
				answer.append(i+1);
				break;
			}
		}
		t--;
	}
	for(int i=0;i<answer.size();i++)
	{
		cout << answer[i] << endl;
	}
	return 0;
}





