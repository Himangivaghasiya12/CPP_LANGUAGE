#include<iostream>
using namespace std;
class shop
{

    public:
        string name,item_name[50];
        int item_number,q[50],total[50],item_price[50],count=0,total_amount=0;
        long int phone_number;
        
     void shop_input()
        {
           
            cout<<" ________________________________________________________________________________________________________ \n";
            cout<<"|                                                                                                        |\n";
            cout<<"|                                                                                                        |\n";       
            cout<<"|                                  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^                                   |\n";
            cout<<"|                                 |         HARDWEAR KHAJANA          |                                  |\n";
            cout<<"|                                  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                                   |\n";
            cout<<"|                                                                                                        |\n";
            cout<<"|              Item_no    \tItem_name                                   \tItem_price               |\n";
            cout<<"|                                                                                                        |\n";
            cout<<"|              1.         \tAuto Closing Concealed Hinges         \t\t1000 rs                  |\n";
            cout<<"|              2.         \tAssorted Hinges                       \t\t500 rs                   |\n";
            cout<<"|              3.         \tSliding And Floding Door Systems      \t\t600 rs                   |\n";
            cout<<"|              4.         \tDrawer Runners                        \t\t800 rs                   |\n";
            cout<<"|              5.         \tCargotech Basket and Inlets           \t\t1000 rs                  |\n";
            cout<<"|              6.         \tCorousel Cargo Series                 \t\t900 rs                   |\n";
            cout<<"|              7.         \tcargoman For Blind Corner Cabinet     \t\t1100 rs                  |\n";
            cout<<"|              8.         \tCargo Midway Series Hattic            \t\t500 rs                   |\n";
            cout<<"|              9.         \tShope Pull Out Rack                   \t\t600 rs                   |\n";