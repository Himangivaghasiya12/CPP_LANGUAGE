//  student result 

#include<iostream>
using namespace std;

class entry
{
    protected:
        int eng,guj,sci,sp;
    public:
        void setdata()
        {
            cout <<"\n--------------ENTER SUBJECTS MARKS\n";
            cout << "Enter English Marks:   ";
            cin >> eng;

            cout << "Enter Gujrati Marks:   ";
            cin >> guj;

            cout << "Enter Science Marks:   ";
            cin >> sci;

            cout << "Enter SP Marks:        ";
            cin >> sp;
        }
};

class result : public entry
{
    int total, per;
    public:
        void res()
        {
            total = eng + guj + sci + sp;
            cout << "\t\tTotal Marks:    " << total << endl;
            per = total *100/400; 
            cout << "\t\tpercentage is:  " << per << endl;
        }
};

int main()
{
    result r;
    r.setdata();
    cout << "\n---------------| result |--------------\n";
    r.res();
}

