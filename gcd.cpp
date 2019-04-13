#include"gcd.hpp"

int gcdIterative(int a, int b)
{
	if (a > b){
		swap(a,b);
	}
	for(int i = 0; i<=a; i++)
	{
		if ( b%(a-i)==0 && a%(a-i)==0 )
			return (a-i);
	}	
}	
int gcdRecursive(int a, int b)
{
	if (a > b)
		swap(a,b);
	if ( b%(a) == 0 && a%(a) == 0 )
		return a;
	else 
		return gcdRecursive (a-1,b); 
}
