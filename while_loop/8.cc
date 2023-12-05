/*
	A B C D E 
	F G H I J 
	K L M N O
	P Q R S T 
	U V W X Y 
*/


#include<iostream>

using namespace std;

int main()
{
	int i=1, j,k=65;
	while(i<=5)
	{
		j=1;	
		while(j<=5)
		{
			j++;
			cout << (char)k << " ";
			k++;
		}
		cout << "\n";
		i++;
	}
	return 0;
}