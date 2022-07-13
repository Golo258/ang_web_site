#include <iostream>
using namespace std;

int function(int a, int b);
int ten();

int main()
{
    int a,b;
    cout << "give two numbers" << endl;
    cin >>
	   a
	  >> b;
    int loopsum = function(a,b);
    cout<< "\nloop sum: " << endl << loopsum;
	int x = ten();
	cout << x <<endl;
	
}
int function(int a, int b)
{
    int counter;
    for (int i = a; i < b; i++)
        counter+=a;

    return counter;
}


int ten()
{
	int x = 10;
	std::cout <<"Siemano kolano";
	cout << "siemano inaczej;
	return x;
}

