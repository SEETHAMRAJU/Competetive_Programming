#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void addq(int n);
void display();
int main()
{
	int t;
	cout << "What Do you want to do?\n0->add \t\t1->display" << endl ;
	cin >>t;
	if(t==0)
	{
		int n;
		cin >> n;
		addq(n);
	}
	else if(t==1)
	{
		display();		
	}
	else
	{
		cout << "Not a valid operation !!" << endl ;
	}
	return 0;
}
void addq(int n)
{
	ofstream OFileObject;
	OFileObject.open("solved.txt",ios::app);
	OFileObject << n << endl ;
	cout << "Added" <<endl;
	OFileObject.close();
}
void display()
{
    int i=0;
    string linesread;
    ifstream IFileObject ("solved.txt");
    if (IFileObject.is_open())
    {
        while ( getline (IFileObject, linesread) )
        {
            	cout << linesread << endl;
        	i++;
	}
        IFileObject.close();
	cout << i-1 << endl ;
    }
    else cout << "File cannot be read";
}
