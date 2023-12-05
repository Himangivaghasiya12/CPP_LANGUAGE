#include<iostream>

using namespace std;

void convert(float celsius)
{
        float a;
        a = (celsius*9/5)+32;
        cout << "fernhit is: "<< a;
}

int main()
{
    float celsius;

    cout << "enter value of celsius";
    cin >> celsius;

    convert(celsius);

    return 0;
}