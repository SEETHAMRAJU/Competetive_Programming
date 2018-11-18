#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n ;
	int a[n];
	int f=0;
	int z =0;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i] == 0)
		{
			z++;
		}
		else
		{
			f++;
		}
	}
	if(f < 3)
	{
		cout << "0" << endl;
	}
	else 
	{
		printf("Came here");
		f = f - (f%3);
		string ans;
		for(int i =0 ; i < f ; f++)
		{
			ans = ans + "5";
		}
		for(int i=0;i<z;i++)
		{
			ans = ans + "0";
		}
		cout << ans << endl;
		cout << "Bye" << endl;
	}
		return 0;
}
