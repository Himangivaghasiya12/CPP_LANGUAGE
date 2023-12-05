#include<iostream>

using namespace std;


void area(float width, float length)
{
        float a;

        a = width * length;
        cout << "area of rectangle is: "<< a;

        cout << "";
}

int main()
{
    float width,length;

    cout << "enter width: ";
    cin >> width;

    cout << "enter length";
    cin >> length;

    area(width,length);

    return 0;
}