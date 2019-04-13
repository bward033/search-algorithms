#include"isPal.hpp"


bool isPalIterative(const char *s, int n){
	for (int i = 0; i < n; i++){
				
		//cout<< "this is s of i = " << s[1] << endl;
		//cout << "this is n = " << n<<endl; 
		if(s[i] != s[(n-1) -i])
		{
			return false;
		}
	}
	return true;		

}
bool isPalRecursive(const char *s, int start, int n){
	if (start > n)
 		return true;
	else if (s[start] != s[n-1])
		return false;
	else 
		return isPalRecursive(s,start +1, n -1);
}
