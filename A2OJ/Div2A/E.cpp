#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	vector <int> s;
    n = input()
    x = map(int , raw_input().split())
    s.push_back(0)
    i = 0
    new = []
    for i in range(0,n):
        new.append(0)
    i = 1
    while(i < n):
        if(x[i] > x[s.l[s.top-1]]):
            while(s.top != 0 and x[i] > x[s.l[s.top-1]]):
                    j = s.mpop()
                    new[j] = i
            s.mpush(i)
        else:
            s.mpush(i)
        i += 1
    while(s.top != 0):
        j = s.mpop()
        new[j] = -1

