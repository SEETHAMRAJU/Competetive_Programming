#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int min(int i,int j,int k);
int main()
{
	int n,temp;
	cin >> n;
	int o=0;int t=0;int h=0;
	vector <int> arr,one,two,three;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		arr.append(temp);
		if(temp==1)
		{
			one.append(i);
			o++;
		}
		else if(temp == 2)
		{
			two.append(i);
			t++;
		}
		else
		{
			three.append(i);
			h++;
		}
	}
	int k = min(o,t,h);
	if(k > 0)
	{
		cout << k << endl;
		int i=0;
		while(i<k)
		{
			cout << ++one[i] << " " << ++two[i] << " " << ++three[i] << endl;
			i++;
		}
	}
	else
	{
		cout << "0" << endl;
	}
	return 0;
}


int min(int i,int k,int j)
{
	if(i < k)
	{
		if(j<i)
			return j;
		else
			return i;
	}
	else
	{
		if(j<k)
			return j;
		else
			return k;
	}
}
