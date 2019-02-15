#include<bits/stdc++.h>
#define make(a,x) memset(a,x,sizeof(x))
using namespace std;
int arr[32];
int cum[32];
int days[32];
int main()
{
	int t,d,q,l,x;
	cin >>t ;	
	while(t--)
	{
		make(arr,0);
		make(days,0)
;		make(cum,0);
		cin >> d;
		cin >> days[0] >> arr[0];
		for(int i=1;i<d;i++)
		{
			cin >> days[i] >> arr[i];
			cum[i] = cum[i-1] + arr[i];	
		}
		cin >> q;
		bool flag = true;
		for(int i=0;i<q;i++)
		{
			cin >> l >> x;
			for(int i=0;i<d;i++)
			{
				if(days[i]>=l)
				{
					if(cum[i]>=x)
					{
						cout << "Go Camp" << endl;
						flag = false;
						break;
					}
				}
			}
			if(flag)
			{
				cout << "Go Sleep" << endl;
			}
		}
		//if(!flag)	
		//	break;
	}
	return 0;
}
