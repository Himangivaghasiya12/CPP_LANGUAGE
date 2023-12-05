// write c program to print given array total elements sum.


#include<iostream>

using namespace std;

int main()
{
	int i,arr[10],totalsum=0;
	
	for(i=0; i<10; i++)
	{
		
		cout << "enter value ";
		cin >> arr[i];
	}
	
	for(i=0; i<10; i++)
	{
		totalsum += arr[i];
		
	}

	
	cout <<" \t\t total sum is :"<< totalsum;

	return 0;
}

	