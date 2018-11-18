#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()

using namespace std;
void printvector(vector <int> l);
int main()
{
	int n;
	cin >> n;
	vector <int> a;
	int i=0,temp;
	while(i<n)
	{
		cin >> temp;
		a.append(temp);
		i++;	
	}
	vector <int> difference;
	for(int i=0;i<n-1;i++)
	{
		difference.append(a[i+1] - a[i]);
	}
	int maxsofar = *max_element(difference.begin(),difference.end());
	int k;
	int minsofar = 1000000;
	for(int i=0;i<n-2;i++)
	{
		if(difference[i+1] + difference[i] < minsofar)
		{
			minsofar = difference[i+1] + difference[i];
			k=i;
		}
	}
	cout << max(minsofar,maxsofar)<< endl;
	return 0;
}

void printvector(vector <int> l)
{
	for(int i=0;i<l.size();i++)
	{
		cout << l[i] << endl;
	}
}




