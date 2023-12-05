//get volume of given value using operater overloding


#include<iostream>
using namespace std;

class Box
{
    int L,width,height;
    public:
    void setdata(int a, int b, int c)
    {
        L = a;
        width =  b;
        height = c;
    }

    int getvolume()
    {
        return  L * width * height;
    }

    Box operator+(Box &n)
    {
        Box t;
        t.L = L + n.L;
        t.width = width + n.width;
        t.height = height + n.height;

        return t;
    }

};

int main()
{
    Box b1,b2,b3,b4;
    b1.setdata(2,2,2);
    cout << "volume of Box of B1 is : " << b1.getvolume() <<endl;

    b2.setdata(4,4,4);
    cout << "volume of Box of B2 is : "  << b2.getvolume() <<endl; 
    
    b3 = b1 + b2;
    cout << "volume of Box of B3 is : " << b3.getvolume() <<endl;
    
    

}