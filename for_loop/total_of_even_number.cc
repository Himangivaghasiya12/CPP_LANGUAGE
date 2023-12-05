#include<iostream>

using namespace std;

void totalodd(int i, int total)
{
        for(i=0; i<=10; i++)
        {
            if(i % 2 == 0)
            {
                total += i;
                cout << "  "<< i ;
            }
            
        }
        cout << "total is: "<< total;
}

int main()
{
        int i, total=0;

        totalodd(i,total);
        return 0;
}