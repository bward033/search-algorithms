#include "gcd.hpp"
#include <iostream>  
using namespace std;
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << " enter a"<<endl;
	cin >> a;
	cout << "enter b"<<endl;
	cin >> b;
	c = gcdIterative(a,b);
	cout << "gcd itertive = " << c <<endl;
	c = gcdRecursive(a,b);
	cout << "gcd recursive = "<< c <<endl;
	return 0;
}
