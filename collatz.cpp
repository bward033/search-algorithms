#include "collatz.hpp"

void collatzIterative(int n)
{
    cout <<"collatzIterative" <<endl;
    while (n > 1)
    {
        if (n%2 == 0 )
        {
            n = (n/2);
            cout << n << "-> ";
        }
        
        else{
            n = 3*n +1;
            cout << n << "-> ";
        }
    }
    
}

void collatzRecursive(int n)
{
    if (n == 1)
        cout << 1;
   
    else if (n%2 == 0 )
    {
        n = (n/2);
        cout << n << "-> ";
        return collatzRecursive(n);
    }
    
    else{
        n = 3*n +1;
        cout << n << "-> ";
        return collatzRecursive(n);
    }
}