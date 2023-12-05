#include<iostream>

using namespace std;

void calculation(float redius)
{
        float area;
        area = redius *redius *3.14;
        cout << "Area  of circle : "<< area;
}

int main()
{
        float redius;

        cout << "enter redius: ";
        cin >> redius;

        calculation(redius);
        return 0;

}