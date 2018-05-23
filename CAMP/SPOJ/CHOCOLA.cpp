#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int main()
{
	int t=0;
	cin >> t;
	vector <int> answer;
	while(t>0)
	{
		int n,m,temp;
		cin >> n >> m;
		vector <int> h,v;
		for(int i=0;i<n-1;i++)
		{
			cin >> temp;
			v.append(temp);
		}
		for(int i=0;i<m-1;i++)
		{
			cin >> temp;
			h.append(temp);
		}
		int i=0;
		int j=0;
		sort(v.begin(),v.end());
		sort(h.begin(),h.end());
		reverse(v.begin(),v.end());
		reverse(h.begin(),h.end());
		int count=0;
		int hr = 1;
		int vr = 1;	
		while(i<n-1 && j<m-1)
		{
			if(v[i] > h[j])
			{
				count = count + (hr*v[i]);
				i++;
				vr++;
			}
			else
			{
				count = count + (vr*h[j]);
				j++;
				hr++;
			}
		}
		while(i<(n-1))
		{
			count = count + (hr)*(v[i]);
			i++;
			vr++;
		}
		while(j<m-1)
		{
			count = count + (vr)*(h[j]);
			j++;
			hr++;
		}

		answer.append(count);	
		t--;
	}
	for(int j=0;j<answer.size();j++)
	{
		cout << answer[j] << endl;
	}
	return 0;
}
