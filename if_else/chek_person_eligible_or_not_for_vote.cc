#include<iostream>

using namespace std;

void voting(int age, char yes, char no, int a
)
{
        if(age>=18)
        {
            a = yes;
            cout << "you have voter id ?  yes or no. ";
            cin >> a;

            if(yes)
            {
                cout << "yes you are eligible";
            }
            if(no)
            {
                cout << "no , you are not eligible  ";
            }

        }
        else
        {
            cout << "you are not eligible for voting";

        }
}

int main()
{
    int age, a;
    char yes, no;

    cout << "enter your age:  ";
    cin >> age;

    voting(age, yes, no, a);

    return 0;
    
}