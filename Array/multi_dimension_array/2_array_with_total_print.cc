#include<iostream>

using namespace std;
int main()
{
	int arr[3][3], i ,j ,totalsum=0;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout << "enter value " << i << j << " "; 
			cin >> arr[i][j];
		}
	}

	cout << "\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout  << "\t" << arr[i][j];
			totalsum += arr[i][j];
		}
		cout << "\n";
		
	}
		
	cout << "\t\t total sum :" << totalsum;
	
	return 0;
}
	