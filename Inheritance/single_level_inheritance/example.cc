// ----------------------------->>>> Example

#include<iostream>
using namespace std;

class base
{
    protected:
        int a;
    public:
        void setdataA()
        {
            cout << "enter a  ";
            cin >> a;
        } 
};

class derived : public base
{
    int b;
    public:
        void setdataB()
        {
            cout << "enter b  ";
            cin >> b; 
        }
        void Getter()
        {
            cout << "sum of a and b  " << a+b << endl;
        }
};

int main()
{
    derived d;\
    d.setdataA();
    d.setdataB();
    d.Getter();
}