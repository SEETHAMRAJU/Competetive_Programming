#include<bits/stdc++.h>
#define append push_back
using namespace std;
int main()
{
	string trump,first,second;
	cin >> trump;
	cin >> first >> second;
	map <char,int> p;
	p['6'] = 1;
	p['7'] = 2;
	p['8'] = 3;
	p['9'] = 4;
	p['T'] = 5;
	p['J'] = 6;
	p['Q'] = 7;
	p['K'] = 8;
	p['A'] = 9;
/*
	p.insert(pair<char,int>("6",1));
	p.insert(pair<char,int>("7",2));
	p.insert(pair<char,int>("8",3));
	p.insert(pair<char,int>("9",4));
	p.insert(pair<char,int>("T",5));
	p.insert(pair<char,int>("J",6));
	p.insert(pair<char,int>("Q",7));
	p.insert(pair<char,int>("K",8));
	p.insert(pair<char,int>("A",9));
	*/
	if(first[1].compare(trump) == 0)
	{
		printf("YES\n");
		return 0;
	}
	else if(second[1].compare(trump) == 0)
	{
		printf("NO\n");
	}
	else if(p[first[0]] > p[second[0]])
	{
		printf("YES\n");
		return 0;
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}





