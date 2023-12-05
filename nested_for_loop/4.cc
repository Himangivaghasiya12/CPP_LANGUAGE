/*
    1 1 1 1 1 
    3 3 3 3 3 
    5 5 5 5 5 
    7 7 7 7 7 
    9 9 9 9 9
*/


#include<iostream>
using namespace std;

void pattern(int i, int j)
{
        for(i=1; i<=10; i+=2)
        {
            for(j=1; j<=5; j++)
            {
                cout << " "<< i;

            }
            cout << "\n";
        }
}

int main()
{
        int i, j;

        pattern(i,j);
        return 0;

}