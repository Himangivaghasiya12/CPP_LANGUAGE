#include<iostream>
using namespace std;

void chek(int total, float per ,int sci, int guj, int eng)
{
        total = sci + guj + eng;
        per = (total*100) / 300;
        if(per>=35)
        {
            cout << "student is pass";
        }
        else
        {
            cout << "student is fail";
        }
}       


int main()
{
        int sci,guj,eng,total;
        float per;

        cout << "enter scie marks";
        cin >>sci;

        cout << "enter guj marks";
        cin >>guj;

        cout <<"enter eng marks";
        cin >> eng;

        chek(total,per,guj,sci,eng);

        return 0;
}