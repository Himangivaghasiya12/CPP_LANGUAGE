// write a program to find a banking system in cpp


#include <iostream>

using namespace std;

    void deposit (float &balance, float amount)
    {
        balance += amount ;
        cout << "Amount deposited sucessfully ." << endl;
        cout << "Available Amount : " << amount + balance << endl;
    }

    void withdraw(float &balance, float amount,float withrawamount )
    {
        if (balance >=amount )
        {
            balance -=amount;
            cout << "Amount withdrawn sucessfully ." << endl;
            cout << "available amount :  "<< balance - withrawamount  <<endl;
        }
        else 
        {
            cout <<"Insufficient balance."<< endl;
        }
    }
    void checkbalance(float &balance)
    {
        cout << "Your account balance is $ "<< balance << endl;
    }


int main ()
{
    float balance =0;
    int choice;
    float amount,withrawamount ;

while (true)
{
      cout << "1. Deposit" << endl;
      cout << "2. Withdraw" << endl;
      cout << "3. Check Balance" << endl;
      cout << "4. Exit" << endl;
      cout << "Enter your choice: ";
      cin >> choice;
      
 switch (choice)
        {
  
case 1:
    
    cout << "Enter the amount to deposit: ";    
    cin >> amount;
  deposit (balance, amount);
    
break;
  
case 2:
    
    cout << "Enter the amount to withdraw: ";
  cin >> amount;
    withdraw (balance, amount,withrawamount);
    
break;
  
case 3:
  checkbalance (balance);
    
break;
  
case 4:
  cout << "\t\tThank you for using our banking system.\n\t\t\t have a nice day !" << endl;
    
return 0;
  
default:    
cout << "Invalid choice. Please try again." << endl;  
}

}
 
return 0;
}