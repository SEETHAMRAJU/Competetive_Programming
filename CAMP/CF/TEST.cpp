#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, s;
    cin >> x >> y >> s;
    if(x != 0 || y != 0){
	cout << abs(x) + abs(y);        
	if((s-(abs(x)+abs(y))) >= 0 && (s-(abs(x)+abs(y)))%2 == 0)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    else{
        if(s%2 == 0)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    return 0;
}
