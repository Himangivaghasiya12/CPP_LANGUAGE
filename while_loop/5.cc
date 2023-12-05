/*
	2 4 6 8 10
	2 4 6 8 10
	2 4 6 8 10
	2 4 6 8 10
	2 4 6 8 10
		
*/


#include<iostream>

using namespace std;
int main()
{
	int  i=2;
	do
	{
	  int j=2;
	  while(j<=10)
	  {
		cout << j<< " ";
		j+=2;
	  }
	  cout << "\n";
	  i+=2;
	 }
	 while(i<=10);
	return 0;
}