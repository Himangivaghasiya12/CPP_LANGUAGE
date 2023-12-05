// using class and constructor make a program to find,, first give menu to user and user will select a item and give them bill.

/*include <iostream>
#include <string>

using namespace std;

class Item 
{
    public:
    int no,rate;
    string name;
    double price;
    double gst;

    Item(int _no, const string &_name, double _price ,double _gst) : no(_no), name(_name), price(_price),gst(_gst) {}
};

int main() 
{
    Item items[] = 
    {
        {1, "Mobile   | ", 500.0,10},
        {2, "Laptop   | ", 1000.0,15},
        {3, "Monitor  | ", 300.0,1.5},
        {4, "Keyboard | ", 30.0,5},
        {5, "Mouse    | ", 20.0,20}
    };
        cout << "\n\n---Computer World---" << endl;
        cout << "\nNO  |  Name  |  Rate" << endl;
        cout << "--------------------" << endl;

        
        for (const Item &item : items)
        {
            cout << item.no << " | " << item.name << item.price  << endl;
            
        }
        cout << "6   For Exit " <<endl ;

    string userName;
    int itemNo,amount;
    int quantity;
    string mobileNo;
    double totalAmount , totalGst;

    cout << "Enter your Name: ";
    cin >> userName;

    cout << "Enter your Mobile No: ";
    cin >> mobileNo;
    
    while (true)
    {
        cout << "Enter the Item No: ";
        cin >> itemNo;
        if(itemNo == 6)
        {
            break;
        }
        else if (itemNo < 1 ||  itemNo > 6) 
        {
            cout << "Invalid item number." << endl;
        }
        
        cout << "Enter the Quantity: ";
        cin >> quantity;
    }    
        amount = quantity * items[itemNo - 1].price ;    
        totalGst = items[itemNo - 1].gst * amount/100;
        totalAmount =  totalGst + amount;
    
    cout << "----------------------- Store Bill -----------------------" << endl;
    cout << "                                    name : " << userName <<endl;
    cout << "                                    mo. : " << mobileNo << endl;
    cout << "Item Name" <<"\t\t" << "Price" <<"\t\t" << "Quantity" <<"\t" <<"Amount" <<"\t\t" <<"Total GST"  << endl;
    cout << items[itemNo - 1].name <<"\t" << items[itemNo - 1].price <<"\t\t" << quantity <<"\t\t"<< amount  <<"\t\t"  << totalGst <<endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t\ttotal amount \n\t\t\t\t\t\t\t" << totalAmount<<endl;
    
    return 1;
}*/

#include <iostream>
using namespace std;

class Shop {
private:
    string name;
    string itemNames[50];
    int itemPrices[50];
    int itemCount;

public:
    Shop(string shopName) {
        name = shopName;
        itemCount = 0;
    }

    void addItem(string itemName, int itemPrice) {
        itemNames[itemCount] = itemName;
        itemPrices[itemCount] = itemPrice;
        itemCount++;
    }

    void displayMenu() {
        cout << "Welcome to " << name << "!" << endl;
        cout << "Menu:" << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << i+1 << ". " << itemNames[i] << " - " << itemPrices[i] << " rs" << endl;
        }
    }

    int calculateBill(int itemNumber, int quantity) {
        int totalPrice = itemPrices[itemNumber-1] * quantity;
        return totalPrice;
    }
};

int main() {
    // Create an instance of the Shop class
    Shop myShop("HARDWEAR KHAJANA");

    // Add items to the shop
    myShop.addItem("Auto Closing Concealed Hinges", 1000);
    myShop.addItem("Assorted Hinges", 800);
    myShop.addItem(" 3.         liding And Floding Door Systems      600 rs                   ");
    myShop.addItem("Assorted Hinges", 800);
    myShop.addItem("Auto Closing Concealed Hinges", 1000);
    myShop.addItem("Assorted Hinges", 800);
    myShop.addItem("Auto Closing Concealed Hinges", 1000);
    myShop.addItem("Assorted Hinges", 800);
    myShop.addItem("Auto Closing Concealed Hinges", 1000);
    myShop.addItem("Assorted Hinges", 800);


    // Display the menu   
    myShop.displayMenu();

    // Get user input for item selection and quantity
    int itemNumber, quantity;
    cout << "Enter the item number: ";
    cin >> itemNumber;
    cout << "Enter the quantity: ";
    cin >> quantity;

    // Calculate the bill
    int totalAmount = myShop.calculateBill(itemNumber, quantity);
    cout << "Total bill: " << totalAmount << " rs" << endl;

    return 0;
}





