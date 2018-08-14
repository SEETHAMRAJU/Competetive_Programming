#include<bits/stdc++.h>
#define pi 6.28318530718
#define append push_back
using namespace std;
int main()
{
	vector <double> answer;
	int count =0;
	while(1)
	{
		double l;
		scanf("%lf",&l);
		if(l == 0)
			break;
		else
		{
			count++;
			answer.append((l*l)/(pi));
		}
	}
	for(int i=0;i<count;i++)
	{
		printf("%0.2lf\n",answer[i]);
	}

	return 0;
}





