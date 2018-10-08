#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	vector <string> answer;
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n,k,temp;
		string ans = "";
		scanf("%d%d",&n,&k);
		for(int j=0;j<n;j++)
		{
			scanf("%d",&temp);
			k = k-temp;
			if(k<0)
			{
				ans += "0";
				k += temp;
			}
			else
				ans += "1";


		}
		answer.append(ans);
	}
	for(int i=0;i<t;i++)
		//printf("%s\n",answer[i]);
		cout << answer[i] << endl;
	return 0;
}





