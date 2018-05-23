
#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()

using namespace std;
void printvector(vector <int> l);
int main()
{
	int n,k;
	cin >> n >> k;
	vector <int> a;
	vector <vector<int>> hash;
	for(int i=0;i<101;i++)
	{
		vector <int> temp;
		hash.append(temp);
	}
	int temp1;
	for(int i=0;i<n;i++)
	{
		cin >> temp1;
		a.append(temp1);
		hash[temp1].append(i);
	}
	int sum =0;
	for(int i=0;i<a.size();i++)
	{
		sum = sum + a[i];
	}
	if(sum <= k)
	{
		cout << n << endl;
		for(int i=0;i<n;i++)
		{
			cout << i+1 << " ";
		}
		cout << "" << endl;
		return 0;
	}
	sort(a.begin(),a.end());
	vector <int> answer;
	int count=0;
	int i =0;
		
	while(k>0 || i <n)
	{
		for(int j=0;j<hash[a[i]].size() && k>0;j++)
		{
			k = k - a[i];
			answer.append(hash[a[i]][j]+1);
			if(k < 0)
			{
				answer.pop_back();
				k = 0;
				break;
			}
			count ++;	
		}
		i = i + hash[a[i]].size();
	}
	if(k>=0)
	{
		cout << count << endl;
		for(int i=0;i<answer.size();i++)
		{
			cout << answer[i] << " ";
		}
		cout << endl;
	}
	else
	{
		cout <<"0" << endl;
	}
	return 0;
}

void printvector(vector <int> l)
{
	for(int i=0;i<l.size();i++)
	{
		cout << l[i] << endl;
	}
}




