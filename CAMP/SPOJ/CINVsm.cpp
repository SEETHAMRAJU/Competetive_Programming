#include<bits/stdc++.h>
#define append push_back
#define insert push_front
#define pop pop_back()
using namespace std;
int answer = 0;
void mergesort(int *arr,int l,int r);
void merge(int *arr,int l,int r,int d);
int main()
{
	vector <int> ans;
	while(1)
	{
		int n;
		cin >>n;
		if(n == 0)
		{
			break;
		}
		int *arr;
		arr = new int [n];
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		mergesort(arr,0,n-1);
		ans.append(answer);
		answer = 0;
		
	}
	for(int j=0;j<ans.size();j++)
	{
		cout << ans[j] << endl;
	}
	return 0;
}
void mergesort(int *arr,int l,int r)
{
	if(l<r)
	{
		int d = (l+r-1)/2;
		mergesort(arr,l,d);
		mergesort(arr,d+1,r);
		merge(arr,l,r,d);
	}
	
}
void merge(int *arr,int l,int r,int d)
{
	int n1 = d - l + 1;
	int n2 = r - d;
	vector <int> L,R;
	for(int i=0;i<n1;i++)
	{
		L.append(arr[l+i]);
	}
	for(int i=0;i<n2;i++)
	{
		R.append(arr[d + 1 + i]);
	}
	int i=0;
	int j=0;
	int k=l;
	int count = 0;
	while(i<n1 && j<n2)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
			count = count + j;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k] = L[i];
		i++;
		k++;
		count = count + j;
	}
	while(j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
	answer = answer + count;
}
