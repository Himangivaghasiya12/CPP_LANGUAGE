#include <iostream>
using namespace std;


class Number 
{
    protected:
        int num;
    public:
        void getNumber() 
        {
            cout << "Enter a number: ";
            cin >> num;
        }
};


class FactorialCalculator : public Number
{
    public:
        int calculateFactorial() 
        {
            int factorial = 1;
            for (int i = 1; i <= num; ++i) 
            {
                factorial *= i;
            }
            return factorial;
        }
};


class SquareCalculator : public Number 
{
    public:
        int calculateSquare() 
        {
            return num * num;
        }
};

int main()
{
    FactorialCalculator factorialObj;
    SquareCalculator squareObj;

    factorialObj.getNumber();

    int factorial = factorialObj.calculateFactorial();
    cout << "Factorial: " << factorial << endl;

    squareObj.getNumber();

    int square = squareObj.calculateSquare();
    cout << "Square: " << square << endl;

    return 0;
}
