// constructor example.


#include<iostream>

using namespace std;

class arith
{
    private:
            int a,b;
    public:
        arith()
        {
            int a, b;
           // cout << a << endl;
            //cout << b << endl;
        }

        void print(int a, int b)
        {
            cout << "sum is  " << a+b;
        }
};

int main()
{
    int a,b;
    cout << "enter a value   ";
    cin >> a;

    cout << " enter b value   ";
    cin >> b;
    
    arith a1;
    a1.print(a,b);

    return 0;
}