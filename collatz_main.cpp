#include "collatz.hpp"
#include <iostream>
using namespace std;
int main(){
    int a = 13;
    
    
    cout << " enter a number to collatz"<<endl;
    //cin >> a;
    
    //collatzIterative(a);
    // Generate a Collatz sequence for n iteratively.
    collatzRecursive(a);
   
    
    return 0;
}


