#include<iostream>

using namespace std;
void convert(int dollar)
{
        float a;
        a = dollar*80;

        cout << "in ruppes : "<< a;
}

int main()
{
        int dollar;

    cout << "enter dollar: ";
    cin >> dollar;

    convert(dollar);
    return 0;
}