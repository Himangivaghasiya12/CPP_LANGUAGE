
#include<iostream>

using namespace std;

class test
{
    private:
        int m,s;
    public:
        void setdata(int , int );

        void getadd()
        {
                cout << "addition  is  : " << m + s <<endl ;
        }
        void getsub()
        {
                cout << "substaction  is  : " << m - s <<endl ;
        }
        void getmul()
        {
                cout << "multiflication  is  : " << m * s <<endl ;
        }
        void getdevi()
        {
                cout << "devision  is  : " << m / s <<endl ;
        }

};

void test :: setdata(int a, int b)  // this session is for setdata function of class test it is declared out of class 
{
    m=a , s=b; 
}

int main()
{
    test t[5] ; // t[5] is called a object array 

    int i,a,b;
    
    for(i=1; i<=4; i++)
    {
        cout << "enter a and b " ;
        cin >> a >> b;
        t[i].setdata(a,b);

    }

    cout << "\n\n";
    for(i=0; i<=4; i++)
    {
        if(i==1)
        {
            t[i].getadd();
        }
        else if(i==2)
        {
            t[i].getsub();
        }
        else if(i==3)
        {
            t[i].getmul();
        }
        else if(i==4)
        {
            t[i].getdevi();
        }
    }
}