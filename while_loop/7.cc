/*
	11 12 13 14 15 
	21 22 23 24 25
	31 32 33 34 35
	41 42 43 44 45
	51 52 53 54 55
*/

#include<iostream>
using namespace std;

int main()
{
	int i=11,k=5,j=11;

	while(i<=15)
	{
		j=11;
		k+=5;
		while(j<=15)
		{
			j++;
			k++;
			cout << k << " ";
		}
		cout << "\n";
		i++;
	}
	return 0;
}