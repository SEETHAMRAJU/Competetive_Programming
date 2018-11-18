#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int n,temp;
	cin >> n;
	vector <int> arr;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		arr.append(temp);
	}
	int l,r;
	l = 0;
	r = n-1;
	for(int i=1;i<n;i++)
	{
		if(arr[i-1] > arr[i])
		{
			l = i-1;
			break;
		}
	}
	for(int i=l+1;i<n;i++)
	{
		if(arr[i-1] < arr[i])
		{
			r = i-1;
			break;
		}
		if(i == n-1)
		{
			r = n-1;
			break;
		}
		
	}
	for(int i=r+1;i<n;i++)
	{
		
		if(arr[i-1] > arr[i])
		{
			cout << "no" << endl;
			return 0;
		}
	}
	//Got l and r
	if(l == 0 && r!= n-1)
	{
		if(arr[r+1] > arr[l])
		{
			cout << "yes" << endl;
			cout << ++l << " " << ++r << endl;
			return 0;
		}
	}
	else if(l!=0 && r == n-1 && l!= n-1)
	{
		if(arr[l-1] < arr[r])
		{
			cout << "yes" << endl;
			cout << ++l << " " << ++r << endl;
			return 0;
		}
	}
	else if(l == n-1)
	{
		cout << "yes" << endl;
		cout << "1 1"<< endl;
		return 0;
	}
	else if(l!= 0 && r!= n-1 && l!= n-1)
	{
		if(arr[l-1] < arr[r] && arr[r+1] > arr[l])
		{
			cout << "yes" << endl;
			cout << ++l << " " << ++r << endl;
			return 0;
		}
	}
	else if(l == 0 && r == n-1)
	{
		cout << "yes" << endl;
		cout << "1 " << n << endl;
		return 0;
	}
	cout << "no" << endl;
	return 0;
}





