/*
	1 2 3 4 5
	1 2 3 4 5
	1 2 3 4 5 
	1 2 3 4 5 
	1 2 3 4 5
*/


#include<iostream>

using namespace std;
int main()
{
	int i=1;
	do
	{
		int j=1;
		while(j<=5)
		{
			cout << j<< " ";
			j++;
		}
		cout << "\n";
		i++;
	}
	while(i<=5);
	return 0;
}