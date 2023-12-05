#include<iostream>
using namespace std;

void find(int year)
{
        if(year % 4 ==0 )
        {
           cout << "yes it's a leap year";
        }
        else
        {
            cout << "no, it's not a leap year";

        }
}

int main()
{
        int year;
        cout << "enter year : ";
        cin >> year;

        find(year);

        return 0;

}