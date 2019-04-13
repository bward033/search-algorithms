
bool isMemberSequentialSearchIterative(int list[], int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (list[i]==key)
			return true;
	}
	return false;

}

bool isMemberSequentialSearchRecursive(int list[], int n, int key)
{
	if (n == 0)
	{
	//	if (list[0] == key)	
	//		return true;
		return false;
	}	
	else if (list[n-1]==key)
		return true;
	else 
		return isMemberSequentialSearchRecursive(list , n-1, key);
}
