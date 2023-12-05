#include<iostream>

using namespace std;

void convert(float feet)
{
    float a;
    a= feet * 12;
    cout << "inches is: "<< a;
}

int main()
{
    float feet;

    cout << "enter value of feet: ";
    cin >> feet;

    convert(feet);

    return 0;
}