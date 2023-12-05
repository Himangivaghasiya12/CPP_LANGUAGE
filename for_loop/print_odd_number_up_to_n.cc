#include<iostream>

using namespace std;

void odd(int i, int n)
{

        for(i=0; i<=n; i+=i)
        {
            if(i%2 != 0)
            {
                cout << " \t\total of odd number  "<< i;
            }
        }
        
}

int main()
{
        int i,n= 10;

        odd(i,n);

        return 0;

}