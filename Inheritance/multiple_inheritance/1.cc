// print result

#include<iostream>
using namespace std;

class one
{
    protected:
        int eng;
    public:
        void setdata()
        {
            cout << "enter english marks  ";
            cin >> eng;
        }
};

class two 
{
    protected:
        int sp;
    public:
        void setadat()
        {
            cout << " enter sp marks  ";
            cin >> sp;
        }
};

class result: public one,public two
{
    protected:
         int total,per;
    public:
        void res()
        {
            total = eng + sp;
            cout << "total is:  " << total << endl;
            per = total * 100 / 200;
            cout << "percentage is:  " <<  per << endl;
        }
         
};

int main()
{
    result r;
    r.setdata();
    r.setadat();
    r.res();
}
