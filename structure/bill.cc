
#include<iostream>
using namespace std;

struct bill

{

    int rate,quantity,amount,discount,billamount,gst,netbill;
    char productname[40];
};

int main()
{
    struct bill b[5];

    int i;
    for(i=1; i<=3; i++)
    {
            cout << "enter product name   ";
             cin >>b[i].productname;

            cout <<"enter rate: ";
             cin >>b[i].rate;

            cout <<"enter quantity: ";
            cin >> b[i].quantity;
    }

    cout << "productname\trate\tquantity\tamount   \tdiscount\tbillamount\tgst18\tnetbill\n";

    for(i=1; i<=3; i++)
    {
        b[i].amount = b[i].rate * b[i].quantity;
        b[i].discount = b[i].amount*5/100 ;
        b[i].billamount = b[i].quantity*b[i].rate-b[i].discount;
        b[i].gst = b[i].billamount*18/100;
        b[i].netbill = b[i].billamount + b[i].gst;


       cout << "\n \t" << b[i].productname <<"\t"<<b[i].rate <<"\t"<<b[i].quantity <<"\t\t"<<b[i].amount <<"   \t"<<b[i].discount <<"\t\t"<<b[i].billamount <<"\t\t"<<b[i].gst <<"\t" << b[i].netbill <<"\t" ;
    }
        

}
