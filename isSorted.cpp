#include "isSorted.hpp"

bool isSortedIterative(int list [],int n){

	for( int i = 0; i < n-1; i++){
		if( list[i] > list[i+1])
			return false;
	} 
	return true;
}

bool isSortedRecursive(int list[],int n){
	if (n==1)
	{
		if(list[0]>list[1])
		       return false;
		return true;
	}
	if(list[n-1]<list[n-2])
		return false;
	return isSortedRecursive(list,n-1);	
}	
