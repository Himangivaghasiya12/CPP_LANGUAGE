/* find area and circumfernce of ractangle*/

#include<iostream>
using namespace std;

class ractangle
{
    private:
    
        int length,height;

    public:
        ractangle()
        {
            int l=length ,h = height;

            
        }


        void area(int l, int h)
        {
            cout << "area is :"<< l*h;
        }
        void  circumfernce(int l, int h)
        {
            cout << " circumfernce is "<< 2*(l+h);
        }
    
};

int main()
{
    int a,b;

    cin >> a >> b;

    ractangle r1;

    r1.area(a,b);
    r1.circumfernce(a,b);

    return 0;
}