// make a cube

#include<iostream>
using namespace std;

class row
{
    protected:
        int i;
    public:
        void setdata()
        {
            for(i=0; i<=5; i++)
            {
                cout << i;
            }
        }
};
class colume
{