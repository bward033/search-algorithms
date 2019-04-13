#include <iostream>
#include "isMemberBinarySearch.hpp"
using namespace std;

/*
int *readNValues(int numInputValues)
{
    int *numbers = new int[numInputValues];
    int numRead = 0;
    for( int i = 0; i < numInputValues && std::cin >> numbers[numRead++]; i++ )
        ;
    if( numInputValues != numRead ) {
        std::cerr << "Wasn't able to read " << numInputValues << " values; read only " << numRead << " Terminating...\n";
        exit(1);
    }
    return numbers;
}

*/
int main()
{
	/*
    int numInputValues;
    std::cin >> numInputValues;
    int *numbers = readNValues(numInputValues);

    int numMembers;
    std::cin >> numMembers;
    int *members = readNValues(numMembers);
  
      each of the values in "members" should be a member of "numbers"
     */
//    int numNonMembers;
//    std::cin >> numNonMembers;
//    int *nonMembers = readNValues(numNonMembers);
    /*
      each of the values in "nonMembers" should not be a member of "numbers"
     */
	int g =0;
	int list[10]={1,2,3,4,5,6,7,8,9,100};
	cout <<"what number do you want to find" << endl;
	cin >> g;
	
	if (isMemberBinarySearchIterative(list,10,g))
		cout <<"g is a member Iterative "<<endl;
	if (isMemberBinarySearchRecursive(list,10,g))
		cout <<"g is member recur" <<endl;
   // delete [] numbers;
   // delete [] members;
   // delete [] nonMembers;
    return 0;
}
