// write c program to print given array odd-even number sum.


#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int i,oddSum=0,evenSum=0;

	for(i=0; i<10; i++)
	{
		cout << " enter numbers ";
		cin >> arr[i];
	}
	
	for(i=0; i<10; i++)

	{
        	if(arr[i] %2 ==0)
		    {
        		evenSum += arr[i];
        	}
    		else
		{
    			oddSum += arr[i];
        	}
    	}
    cout << "\t\t The sum of odd numbers are:\t"<< oddSum;
    cout << "\n\t\t The sum of even numbers are:\t " << evenSum;
    
    return 0;
}