#include "isMemberBinarySearch.hpp"
bool isMemberBinarySearchIterative(int list[], int n, int key)
{
    int b = 0;
    n = n-1;
    while (b <= n) {
        
        int m = b + ((n-b)/2);
        
        if (list[m] == key )
            return true;
        

        else if (key < list[m])
            n = m - 1;
        
        else
            b = m + 1;
    }
    return false;
}

bool isMemberBinarySearchRecursive(int list[], int n, int key)
{
    int b = 0;
    if(isMemberBinarySearchRecursiveHelper(list, n-1,b,key))
       return true;
    return false;
}

bool isMemberBinarySearchRecursiveHelper(int list[], int n, int b, int key){
    
    if ( b > n)
        return false;
    else {
        int m = b + ((n-b)/2);
        
        if (list[m] < key)
            return isMemberBinarySearchRecursiveHelper(list,n, m+1, key );
        else if (list[m] > key)
            return isMemberBinarySearchRecursiveHelper(list,m-1,b , key);
        else
            return true;
            
    }
    
}