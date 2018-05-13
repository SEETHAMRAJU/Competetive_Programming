#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	vector <int> answer;
	int arr[3][5];
	int nine,six
	arr[0][0] = 1; 		//2
	arr[0][1] = 2;
	arr[0][2] = 4;
	arr[0][3] = 8; 
	arr[0][4] = 6;
	arr[1][0] = 1; 		//3
	arr[1][1] = 3;
	arr[1][2] = 9;
	arr[1][3] = 7;
	arr[1][4] = 0;
	arr[2][0] = 1; 		//7
	arr[2][1] = 7;
	arr[2][2] = 9;
	arr[2][3] = 3;
	arr[2][4] = 0;
	arr[4][0] = 1; 		
	while(t > 0)
	{
		long long int a;
		long long int b;
		cin >> a >> b;
		a = a%10;
		if(b == 0)
		{
			answer.push_back(1);
			t--;
			break;
		}
		switch (a)
		{
			case 1:
				answer.push_back(1);
				break;
			case 2:
				b = b%5;
				answer.push_back(arr[0][b]);
				break;
			case 3:
				b = b%4;
				answer.push_back(arr[1][b]);
				break;
			case 4:
				b = b%3;
				a = 2;
				b = (b*2)%3;
				answer.push_back(arr[0][b]);
				break;
			case 5:
				answer.push_back(5);
				break;
			case 6:
				answer.push_back(6);
				break;
			case 7:
				b = b%4;
				answer.push_back(arr[2][b]);
				break;
			case 8:
				b = b%5;
				b = (b*3)%5;
				a =2;
				answer.push_back(arr[0][b]);
				break;
			case 9:
				b = b%2;
				b = (b*2)%2;
				a = 3;
				answer.push_back(arr[1][b]);
				break;
			default :
				answer.push_back(0);	
		}
		t--;
	}
	for(int j=0; j < answer.size() ; j++)
	{
		cout << answer[j] << endl;
	}
	
	return 0;
}
