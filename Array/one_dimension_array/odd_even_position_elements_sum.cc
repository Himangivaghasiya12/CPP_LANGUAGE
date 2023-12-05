// write c program to print given array odd-even postion elements number sum.


  #include<iostream>

  using namespace std;

int main()
{
	int arr[10],i, evensum=0, oddsum=0;

	for(i=0; i<10; i++)
	{
		cout << "enter value arr "<< i;
		cin >> arr[i];
	}
	
	for(i=0; i<10; i++)
	{
		if(i % 2 == 0)
		{
			evensum += arr[i];
		}
		else
		{
			oddsum += arr[i];
		}
	}
	
	cout << "\t\t odd number postion elements sum: "<< oddsum;
	cout << "\n\t\t even number postion elements sum: "<< evensum;

	return 0;
}

