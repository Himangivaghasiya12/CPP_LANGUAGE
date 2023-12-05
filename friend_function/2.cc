
// largest no of  among them using frienfd function

#include <iostream>
using namespace std;

class Number
{
    private:
        int num;

    public:
        Number(int n) : num(n) {}

        friend int findLargest(Number n1, Number n2);
};

int findLargest(Number n1, Number n2) 
{
    if(n1.num > n2.num)
    {
        cout << "number 1 |"<< n1.num <<"| is largest  " << endl;
    }
    else if(n1.num < n2.num)
    {
        cout << "number 2 |" << n2.num <<"| is largest  " << endl;k,i
    }
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    Number numOb1(num1);
    Number numOb2(num2);

    int largest = findLargest(numOb1, numOb2);

    return 0;
}
