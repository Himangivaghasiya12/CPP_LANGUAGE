// ~calculate() IS CALLED A destructor.  it is use for print or prosess on program ending.


#include<iostream>

using namespace std;

class calculate
{
    private:
            int a,b;

    public:
            calculate(int c, int d)
            {
                a=c;
                b=d;
                cout << "sum is  " << a+b << endl;

            } 
             ~calculate()
            {
                cout << " sub  is  "<< a-b << endl;
                cout << "\t\t\t  CALCULATION IS OVER ";
            }

            void mul(int a, int b)
            {
                cout << "mul is  "<< a*b << endl;
                
            }
};

int main()
{
    int a,b;

    cout << "enter a value :  ";
    cin >> a;

    cout << " enter value of b :   ";
    cin >>  b;

    calculate c1(a,b);
    c1.mul(a,b);
   

    return 0;
}

