#include<bits/stdc++.h>
#define append push_back
using namespace std;
double distance(int x1,int y1,int x2,int y2);
int main()
{
	int r,x1,x2,y1,y2;
	cin >> r >> x1 >> y1 >> x2 >> y2;
	double R = 2.0*r;
	double dist = distance(x1,y1,x2,y2);
	int tot = (int)ceil(dist/R);
	
	cout << tot << endl;
	return 0;
}
double distance(int x1,int y1,int x2,int y2)
{
	double X1,X2,Y1,Y2;
	X1 = (double) x1; 
	X2 = (double)x2;
	Y1  = (double)y1;
	Y2 = (double)y2;
	double answer = sqrt(abs(((X2-X1)*(X2-X1))) + abs(((Y2-Y1)*(Y2-Y1))));
	return answer;
}





