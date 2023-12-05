/*      friend function
            declare in class , define outside of class 
            directly called

        object as arguments and as return     
*/

#include<iostream>
using namespace std;

class rectangle
{
    friend rectangle add(rectangle , rectangle , rectangle, rectangle);
    int l , w;

    public:
        void setdata(int a , int b)
        {
            l=a , w=b;
        }
        int getarea()
        {
            return l*w;
        }
};

rectangle add(rectangle m, rectangle n, rectangle x , rectangle y)
{
    rectangle t;
    t.l = m.l + n.l + x.l - y.l;
    t.w = m.w + n.w + x.w - y.w;
    return t;
}

int main()
{
    rectangle a,b,c,d,e;
    a.setdata(4,5);
    cout << "area of rectangle A is : " << a.getarea() << endl;

    b.setdata(7,8);
    cout << "area of rectangle B is : " << b.getarea() << endl;

    d.setdata(2,3);
    cout << "area of rectangle D  is : " << d.getarea() << endl;

    e.setdata(6,9);
    cout << "area of rectangle E  is : " << e.getarea() << endl;

    c = add(a,b,d,e);
    cout << "area of rectangle C is : " << c.getarea() << endl;
}