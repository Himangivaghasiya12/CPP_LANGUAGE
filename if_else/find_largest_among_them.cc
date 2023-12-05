#include<iostream>

using namespace std;
void find(int a, int b)
{
        if(a>b)
        {
            cout << "a is big";

        }
        else if(b>a)
        {
            cout << "b is big";

        }

}

int main()
{
    int a, b;

    cout << "enter a value";
    cin >> a;

    cout << "enter b value";
    cin >> b;

    find(a,b);

    return 0;
}