/* find area and circumfernceof triangle*/

#include<iostream>
using namespace std;

class triangle
{
    private:
        int base , height;
    public:
        int b= base , h = height;
        void area(int b, int h)
        {
            cout << "area is :" <<  (h *b)/2 << endl; ;
        }
        void circumfernce(int b, int h)
        {
            cout << "circumfernce is :" << 3*b;
        }
};

int main()
{
    int a,b;
    cout << "enter base and height\n";
    cin >> a >> b;

    triangle r1;

    r1.area(a,b);
    r1.circumfernce(a,b);

    return 0;
}