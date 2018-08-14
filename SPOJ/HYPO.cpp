#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	vector <vector <double>> ans;
	while(t>0)
	{
		double H,A;
		scanf("%lf %lf",&H,&A);
		double h = H*H;
		double a = 4*A;
		if(a>h)
		{
			vector <double> temp;
			temp.append(-1);
			ans.append(temp);
		}
		else
		{
			double l = sqrt(h+a) + sqrt(h-a);
			double b = sqrt(h+a) - sqrt(h-a);
			l = l/2.0;
			b = b/2.0;
			if(l*b > 0)
			{
				vector <double> temp;
				temp.append(l);
				temp.append(b);
				temp.append(H+0.0);
				ans.append(temp);
			}
			else
			{
				vector <double> temp;
				temp.append(-1);
				ans.append(temp);
			}
		}
		t--;
	}
	cout.precision(7);
	for(int i=0;i<ans.size();i++)
	{
		sort(ans[i].begin(),ans[i].end());
		for(int j=0;j<ans[i].size();j++)
		{
			if(j == 2)
				cout << ans[i][j] <<".0000000";
			else
				cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}





