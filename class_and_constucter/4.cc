/* writw a program ,construct a class name person, take privtae member , perons age, person city,
 person name.make function for getter and setter method.   */


#include<iostream>20


using namespace std;

class person
{
    private:
        string name, city;
        int age;

    public:
        void setname(string n)
        {
            name = n;
        }
        void setcity(string c)
        {
            city = c;
        }
        
        void setage(int a)
        {
            age = a;
        }


        void getname()
        {
            cout <<"name  " << name << "\n";
        }
        void getcity()
        {
            cout << "city  "<< city << endl;
        }

        void getage()
        {
            cout << "age  " << age << "\n";
        }
        

};

int main()
{
    int a;
    string b,c;

    cout << "enter age   ";
    cin >> a;

    cout << "enter name  ";
    cin >> b;

    cout << "enter city  ";
    cin >> c;

    person p1;
    p1.setage(a);
    p1.setname(b);
    p1.setcity(c);

    p1.getage();
    p1.getcity();
    p1.getname();
    return 0;
}