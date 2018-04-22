#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int j = n*n;
	int i = 1;
	int a=0;
	while(a<n)
	{
		int l;
		l =0;
		while(l<n/2)
		{
			printf("%d ",i);
			i++;
			l++;
		}
		while(l<n)
		{
			printf("%d ",j);
			j--;
			l++;
		}
		printf("\n");
		a++;
	}
	return 0;
}
