#ifndef binarySearch_hpp
#define binarySearch_cpp

 #include<iostream>
 #include<cmath>
 #include<cstdlib>

using namespace std;

bool isMemberBinarySearchIterative(int list[], int n, int key);


bool isMemberBinarySearchRecursive(int list[], int n, int key);

bool isMemberBinarySearchRecursiveHelper(int list[], int n, int b, int key);

#endif 
