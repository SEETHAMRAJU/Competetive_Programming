
#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()

using namespace std;

int main()
{
	int t;
	cin >> t;
	vector <int> arr;
	int temp1,temp2;
	while(t>0)
	{
		cin >> temp1 >> temp2;
		if(temp1 <2)
		{
			if(temp1 == temp2)
			{
				arr.push_back(temp1);
			}
			else
			{
				arr.push_back(-100);	
			}
		}
		else if(temp1 == temp2)
		{
			if(temp1%2 == 0)
			{
				arr.push_back((2*temp1));
			}
			else
			{
				arr.push_back((2*temp1) + 1);
			}
		}
		else if(temp1 - temp2 == 2)
		{
			if(temp1%2 == 0)
			{
				arr.push_back(temp1+temp2);
			}
			else
			{
				arr.push_back(temp1 + temp2 - 1);
			}
		}
		else
		{
			arr.push_back(-100);
		}
		t--;
	}
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i] == -100)
		{
			cout << "No Number" << endl;
		}
		else
		{
			cout << arr[i] << endl;
		}
	}
	return 0;
}
