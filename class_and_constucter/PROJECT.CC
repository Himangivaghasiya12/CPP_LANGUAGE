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
            cout<<"|              10.        \tDoor Closer With Stabdard Arm         \t\t2000 rs                  |\n";
            cout<<"|               0.        \tfinal                                                                    |\n";
            cout<<"|                                                                                                        |\n";
            cout<<"|        .....................................................................................           |\n";
            cout<<"|                                                                                                        |\n";
            cout<<"|________________________________________________________________________________________________________|\n";
            cout<<"                                                                                                          \n";
            cout<<"                               <-----WELLCOME TO HARDWEAR KHAJANA------>                                      \n";
            cout<<"                                      * CUSTOMER CHOIES ITEMS *                                               \n";
            cout<<"-------->> Customer Name:  ";
            cin>>name; //customer name in string name
            cout<<"-------->> Customer Mo.:  ";
            cin>>phone_number;
            {
                if(phone_number>=10)
                {
                    cout<<"vaild number\n";
                }
                else
                {
                    cout<<"unvaild number\n";
                }    
            }
           total[0]=0;
           for (int i = 0; ;i++ )
           {
             cout<<"---->> Enter item number= ";
             cin>>item_number;
             
            
            if(item_number==1)
            {
                cout<<"item_name =Auto Closing Concealed Hinges\n";
                item_name[i]="Auto Closing Concealed Hinges";
                cout<<"item_price =1000\n";
                item_price[i]=1000;
                cout<<"Enter Quantity= ";
                cin>>q[i];
                cout<<"Total amount= "<<endl;
                total[i] = (item_price[i]*q[i]);
                cout<< total[i]<<endl;
               // total_amount=total_amount+total[i];
                cout<<"--------------------------------------\n";
            }
            else if(item_number==2)
            {
                cout<<"item_name =Assorted Hinges\n";
                item_name[i]="Assorted Hinges";
                cout<<"item_price =500\n";
                item_price[i]=500;
                cout<<"Enter Quantity= ";
                cin>>q[i];
                cout<<"Total amount= "<<endl;
                total[i]=(item_price[i]*q[i]);
                cout<< total[i]<<endl;
                cout<<"--------------------------------------\n";
            }
            else if(item_number==3)
            {
                 cout<<"item_name =Sliding And Floding Door Systems  \n";
                 item_name[i]="Sliding And Floding Door Systems ";
                 cout<<"item_price =600\n";
                 item_price[i] = 600;
                 cout<<"Enter Quantity= ";
                 cin>>q[i];
                 cout<<"Total amount= "<<endl;
                 total[i]=(item_price[i]*q[i]);
                 cout<< total[i]<<endl;
                  //total_amount=total_amount+total[i];
                 cout<<"--------------------------------------\n";
            }  
            else if(item_number==4)
            {
                 cout<<"item_name =Drawer Runners \n";
                 item_name[i]="Drawer Runners ";
                 cout<<"item_price = 800\n";
                 item_price[i] = 800;
                 cout<<"Enter Quantity= ";
                 cin>>q[i];
                 cout<<"Total amount= "<<endl;
                total[i]=(item_price[i]*q[i]);
                 cout<< total[i]<<endl;
                 // total_amount=total_amount+total[i];
                 cout<<"--------------------------------------\n";
            }  
            else if(item_number==5)
            {
                 cout<<"Cargotech Basket and Inlets\n";
                 item_name[i]="Cargotech Basket and Inlets";
                 cout<<"item_price = 1000\n";
                 item_price[i] = 1000;
                 cout<<"Enter Quantity= ";
                 cin>>q[i];
                 cout<<"Total amount= "<<endl;
                  total[i]=(item_price[i]*q[i]);
                 cout<< total[i]<<endl;
                  //total_amount=total_amount+total[i];
                 cout<<"--------------------------------------\n";
            }  
            else if(item_number==6)
            {
                 cout<<"Corousel Cargo Series\n";
                 item_name[i]="Corousel Cargo Series";
                 cout<<"item_price = 900\n";
                 item_price[i] = 900;
                 cout<<"Enter Quantity= ";
                 cin>>q[i];
                 cout<<"Total amount= "<<endl;
                  total[i]=(item_price[i]*q[i]);
                 cout<< total[i]<<endl;
                  //total_amount=total_amount+total[i];
                 cout<<"--------------------------------------\n";
            }  
            else if(item_number==7)
            {
                 cout<<"Corousel Cargo Series\n";
                 item_name[i]="Corousel Cargo Series";
                 cout<<"item_price = 1100\n";
                 item_price[i] = 1100;
                 cout<<"Enter Quantity= ";
                 cin>>q[i];
                 cout<<"Total amount= "<<endl;
                  total[i]=(item_price[i]*q[i]);
                 cout<< total[i]<<endl;
                 // total_amount=total_amount+total[i];
                 cout<<"--------------------------------------\n";
            } 
            else if(item_number==8)
            {
                 cout<<"Cargo Midway Series Hattic \n";
                 item_name[i]="Cargo Midway Series Hattic ";
                 cout<<"item_price = 1000\n";
                 item_price[i] = 1000;
                 cout<<"Enter Quantity= ";
                 cin>>q[i];
                 cout<<"Total amount= "<<endl;
                  total[i]=(item_price[i]*q[i]);
                 cout<< total[i]<<endl;
                 // total_amount=total_amount+total[i];
                 cout<<"--------------------------------------\n";
            }  
            else if(item_number==9)
            {
                 cout<<"Shope Pull Out Rack\n";
                 item_name[i]="Shope Pull Out Rack";
                 cout<<"item_price = 600\n";
                 item_price[i] = 600;
                 cout<<"Enter Quantity= ";
                 cin>>q[i];
                 cout<<"Total amount= "<<endl;
                 total[i]= (item_price[i]*q[i]);
                 cout<< total[i]<<endl;
                  //total_amount=total_amount+total[i];
                 cout<<"--------------------------------------\n";
            } 
            else if(item_number==10)
            {
                 cout<<"Door Closer With Stabdard Arm \n";
                 item_name[i]="Door Closer With Stabdard Arm ";
                 cout<<"item_price = 2000\n";
                 item_price[i] = 2000;
                 cout<<"Enter Quantity= ";
                 cin>>q[i];
                 cout<<"Total amount= "<<endl;
                 total[i]= (item_price[i]*q[i]);
                 cout<< total[i]<<endl;
                 // total_amount=total_amount+total[i];
                 cout<<"--------------------------------------\n";
            }
            else
            {
                count = i;
                break;
            }
            
    }
    } 
     void print()
     {
        
         //grand tatal=item_price+total_amount;
         cout<<"                                                                             \n";
         cout<<"<------------------------------------------------------------------------------------------------------------->\n";
         cout<<"                                                                             \n";
         cout<<"                                        --> HARDWEAR KHAJANA BILL <--                      \n";
         cout<<"                                                                             \n";
         cout<<"                                                              -------->> Customer Name:  "<< name << endl;
         cout<<"                                                              -------->> Customer Mo.:  " << phone_number << endl;
         cout<<"                                                                             \n";
         cout<<"________________________________________________________________________________________________________________\n";
         
         cout<<"Item_NAME\t\t Item_price\t\tquantity\t\ttotal_amount \n";     
         cout<<"                                                                             \n";
         for(int i= 0; i<count;  i++)
         {
            cout<<item_name[i]<< "\t\t"<< item_price[i]<< "\t\t"<<q[i]<<"\t\t"<<total[i]<<endl; 
         } 
            cout<<"                                                             grand total:" <<endl;
           // cin>>item_price+total_amount;
            cout<<"                                                                                  \n";                                            
            cout<<"                                                                                 \n";
            cout<<"                                 * THANKYOU FOR VISITING *                                    \n";
            cout<<"                            ....... SEE YOU AGAIN SOON  .......                              \n";
     }
};

int main()
 {
     shop st;
     st.shop_input();
     st.print();
 }

