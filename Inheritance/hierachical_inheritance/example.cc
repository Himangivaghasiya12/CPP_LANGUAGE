// hierachical inheritance
#include<iostream>
using namespace std;

class base
{
    protected:
        int a;
    public:
        void seta()
        {
            cout << "enter A  ";
            cin >> a;
        }
};

class derived1:public base
{
    int b;
    public:
        void setb()
        {
            cout << "enter B  ";
            cin >> b;
        }
        void addition()
        {
            cout << "addition is  " << a + b << endl;
        }
};

class derived2 : public base
{
    int c;
    public:
        void setc()
        {
            cout << "enter C  ";
            cin >> c;
        }
        void product()
        {
            cout << "product of a and b is   "<< a * c << endl;
        }
};

int main()
{
    derived1 d1;
    d1.seta();
    d1.setb();
    d1.addition();

    derived2 d2;
    d2.seta();
    d2.setc();
    d2.product();
}

// factorial no & table