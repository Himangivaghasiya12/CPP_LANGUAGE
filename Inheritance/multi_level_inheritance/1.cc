// print fibonaci series upto n number

#include<iostream>
using namespace std;

class series
{
    protected:
        int n,a=0 , b=1;;
    public:
        void seta()
        {
            cout << "enter n number:  ";
            cin >> n;
        }
};

class series2 : public series
{
    protected:
        int c,i;
    public:
        void setb()
        {
            c = a+b;
            cout << c <<"\t";
            
        }
};

class series3 : public series2
{
    public:
        void setc()
        {
            for(i=0; i<=n; i++)
            {
                c = a + b;
                cout << c << "\t";
                a = b;
                b = c;
            }
        }
};

int main()
{
    series3 s;
    s.seta();
    s.setb();
    s.setc();

}