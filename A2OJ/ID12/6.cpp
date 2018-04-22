#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector <int> s;
	for(int i=0;i < n;i++)
	{
		int t;
		cin >> t;
		s.push_back(t);
	}
	int amazing,max_so_far,min_so_far;
	max_so_far = s[0];
	min_so_far = s[0];
	amazing = 0;
	for(int i=1; i<n;i++)
	{
		if(s[i] > max_so_far)
		{
			max_so_far = s[i];
			amazing++;
		}
		else if(s[i] < min_so_far)
		{
			min_so_far = s[i];
			amazing++;
		}
	}
	cout << amazing << endl;
	return 0;
}
