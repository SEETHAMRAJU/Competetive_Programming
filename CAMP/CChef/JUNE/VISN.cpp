#include<bits/stdc++.h>
#define append push_back
using namespace std;
double solve(double *p,double *q,double *c,double *d,double r);
double abso(double x);
double mini(double x,double y);
int main()
{
	int T;
	cin >> T;
	vector <double> answer;
	while(T>0)
	{
		double p[3],q[3],c[3],d[3],r;
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&p[0],&p[1],&p[2],&q[0],&q[1],&q[2],&d[0],&d[1],&d[2],&c[0],&c[1],&c[2],&r);
		double ans = solve(p,q,c,d,r);
		answer.append(ans);
		T--;
	}
	cout.precision(7);
	for(int i=0;i<answer.size();i++)
	{
		printf("%.6lf\n",answer[i]);
	}

	return 0;
}
double solve(double *p,double *q,double *c,double *d,double r)
{
	double m1,m2,X,Y,t,b,delta,a;
	X = c[0] - p[0];
	Y = c[1] - p[1];
	delta = sqrt(X*X + Y*Y - r*r);
	b = X*Y;
	a = X*X - r*r;
	if(a == 0)
	{
		m1 = (Y*Y - r*r)/(2*X*Y*(-1));
	}
	else
	{
		m1 = (b + delta)/a;
		m2 = (b - delta)/a;
	}
	if(d[1] - m1*d[0] != 0)
	{
		t = (q[1] - m1*q[0]) + (p[0]*m1 - p[1]);
		t = t/(d[1] - m1*d[0]);
		t = abso(t);
	}	
	if(d[1] - m2*d[0] != 0)
	{
		double t1;
		t1 = (q[1] - m2*q[0]) + (p[0]*m2 - p[1]);
		t1 = t1/(d[1] - m2*d[0]);
		t1 = abso(t1);
		t = mini(t,t1);
	}
	else
	{
		double t = q[0] - d[0];
		t = t/d[0];
		t = abso(t);
		return t;
	}
	return t;
}
double abso(double x)
{
	if(x<0)
	{
		return (-1)*x;
	}
	return x;
}
double mini(double x,double y)
{
	if(x<y)
		return x;
	return y;
}


