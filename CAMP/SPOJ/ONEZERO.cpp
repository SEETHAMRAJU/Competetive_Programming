#include<bits/stdc++.h>
#define append push_back
#define endl "\n"
#define N 1000000
#define M 1000000007
#define _ cout << "hola" <<endl;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define cover(arr,val) memset(arr,val,sizeof(arr)) 
using namespace std;
vector<string>q;
void calc();
string solve(ll n);
bool isDiv(ll n,string s);
int main()
{
	//IOS;
	int k;
	cin >> k;
	ll n;
	calc();
	while(k--)
	{
		cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}
string solve(ll n)
{
	for(int i=1;i<q.size();i++)
	{
		if(isDiv(n,q[i]))
			return q[i];
	}
	int i=q.size()-1;
	string temp ="";
	while(true)
	{
		temp = (q[i]+"0");
		if(isDiv(n,temp))
			return temp;
		q.append(temp);
		temp = q[i] + "1";
		q.append(temp);
		if(isDiv(n,temp))
			return temp;
		i++;	
	}
	return "-1";
}
void calc()
{
	q.append("1");
	int i=0;
	while(i<100)
	{
		q.append(q[i]+"0");
		q.append(q[i]+"1");
		i++;
	}
}
bool isDiv(ll n,string s)
{
	ll ans= 0;
	int i=0;
	while(i<s.size())
	{
		if(s[i]=='1')
		{
			ans = (10*ans + 1)%n;	
		}
		else
			ans = (ans*10)%n;
		i++;
	}
	if(ans==0)
		return true;
	return false;
}
