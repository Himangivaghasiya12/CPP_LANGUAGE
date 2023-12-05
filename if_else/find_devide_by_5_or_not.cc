#include<iostream>
using namespace std;

void find(int a)
{
         if(a % 5 ==0)
        {
                cout << "yes";
        }
        else
        {
            cout << "no";
        }
}

int main()
{
        int a;

        cout << "enter value of a: ";
        cin >> a;

       
        find(a);

        return 0;

}
