#include<bits/stdc++.h>
#define append push_back
using namespace std;
int arr[10000];
int main()
{
	int n;
	scanf("%d",&n);	
	vector<string>ans;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int k=0;
	arr[n] = INT_MAX;
	for(int i=n-1;i>=0;i--)
	{	
		int temp = (n-k) - (arr[i]%(n+1));
		if(temp<0)
			temp = n-k + n +1- (arr[i]%(n+1)); 
		for(int j=i;j>=0;j--)
			arr[j] = arr[j] + temp;
		string a = "";
		if(temp>0)
		{	
			a = a + "1 "+ to_string(i+1) +" "+to_string(temp);
			ans.append(a);
		}
		k++;		

	}
	ans.append("2 "+to_string(n)+" "+to_string(n+1));
	cout << ans.size() << endl;
	for(int j=0;j<ans.size();j++)
	{
		cout << ans[j] << endl;
	}
	return 0;
}
