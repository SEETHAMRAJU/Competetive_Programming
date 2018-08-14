#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	int64_t n;
	cin >> n;
	vector <int> num;
	int64_t m = n;
	while(m>0)
	{
		num.append(m%10);
		m = m /10;
	}
	reverse(num.begin(),num.end());
	int flag = num[num.size()-1];
	int minsofar,l;
	minsofar = -1;
	l = 0;
	for(int i=0;i<num.size()-1;i++)
	{
		if(num[i]%2 == 0)
		{
			if(l==0)
			{
				if(num[i] < flag)
				{
					minsofar = i;
					break;
				}
				else
				{
					minsofar = i;
				}
			}
			else if(num[i] < num[minsofar])
			{
				l++;
				if(num[i] < flag)
				{
					minsofar = i;
					break;
				}
				else
				{
					minsofar = i;
				}
			}
		}
		else if(i == num.size()-2 && minsofar == -1)
		{
			cout << "-1" << endl;
			return 0;
		}
	}
	int temp = num[num.size()-1];
	num[num.size()-1] = num[minsofar];
	num[minsofar] = temp;
	int64_t mew = 0;
	for(int i=0;i<num.size();i++)
	{
		mew = mew*10 + num[i];
	}
	cout << mew << endl;
	return 0;
}





