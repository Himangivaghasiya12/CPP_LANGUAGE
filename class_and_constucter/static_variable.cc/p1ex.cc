//static variable

/*#include<iostream>
using namespace std;

class car
{
     public:

     //declaring a static member
            static int a;
            int i=0;
            car()
            {
                  a++;
            }

            void display()
            {
                cout << "display function call ...." << i << endl;
            }

            static void Display()
            {
                cout <<"static function call ....." << endl;
            }


};
int car::a=0;
int main()
{
    car c1;
    c1.display();

    car c2;
    c2.display();

    car c3;
    c3.display();

    cout << "number of object call is " << car::a << endl;
}	*/





class BankAC
{
      public:
              int amt;
              int d;
              int w;
              static int total;

            BankAC(int b)
            {
                amt=b;
                total+=amt;
            }
            
              void withdraw(int a)
              {
                 w=a;
                 amt-=w;
                 total-=w;
                 cout<<amt<<endl;

              }

              void Deposite(int c)
              {
                d=c;
                amt+=d;
                total+=d;
                cout<<amt<<total<<endl;

              }

              static void TotalBal()
              {
                cout << "Toatl Balance is : "<<total<<endl;
              }


};


int BankAC::total =0;

int main()
{
    BankAC b1(1000);
    BankAC b2(1500);

    b1.Deposite(1200);
    b2.withdraw(500);

    BankAC::ToatlBAl();


}

