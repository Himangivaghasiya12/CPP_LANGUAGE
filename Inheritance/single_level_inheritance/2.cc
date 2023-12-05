// print square number upto n

#include<iostream>
using namespace std;

class number
{
    protected:
        int n;
    public:
        void print()
        {
            cout<<"Enter Number:  ";
            cin >> n;
        }
};

class Print : public number
{
    protected:
        int i;
    public:
        void square()
        {
            for(i=1; i<=n; i++)
            {
                cout << i*i <<" \t| ";
           }
        }
};

int main()
{
    Print p;
    p.print();
    p.square();
}
