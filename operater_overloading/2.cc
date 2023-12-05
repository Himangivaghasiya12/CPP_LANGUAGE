#include<iostream>

using namespace std;

class complex
{
    private:
        int length;

    public:
        int  setdata(int l)
        {
            length = l;
        }

        int  getvolume(int l)
        {
            
            return  l * l * l ;
        }
        complex operator*(complex &n)
        {
            complex volume;
            volume.length = length * n.length;
            return volume;
        }
};

int main()
{
    int l,l2,l3;
    cout << "enter value of 1st length " ;
    cin >> l ;
    cout << "enter value of 2nd length ";
    cin >> l2;

    complex s1,s2,s3;
    s1.setdata(l);
    cout << "\nvolume of 1st square is : " << s1.getvolume(l) ;

    s2.setdata(l2);
    cout << "\nvolume of 2nd square is : " ;
    s2.getvolume(l2);

    s3 = s1 * s2 ;
    l3 = l + l2;
    cout << "\n\t\tmultiflication of both length is 3rd square's length ";
    cout << "\nvolume of 3rd squarea is " ; 
    s3.getvolume(l3);

    
}
