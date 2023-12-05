#include<iostream>

using namespace std; 

void result(int eng[5], int guj[5], int sp[5], int total[5], int per[5])
{
        int i;
        for(i=0; i<5; i++)
        {
            cout << "\n enter student marks "<< " " << i+1;

            cout <<"\nenter eng marks:  ";
            cin >> eng[i];

            cout <<"\nenter guj marks:  ";
            cin >> guj[i];

            cout <<"\nenter sp marks:  ";
            cin >> sp[i];
            total[i] = eng[i] + guj[i] + sp[i];
            per[i] = (total[i] * 100) / 300;
        

        }
       cout <<"\nno.\t eng\t guj\t sp\t total\t per";

        for(i=0; i<5; i++)
        {
            cout <<"\n"<< i+1 << " "<< "\t " << eng[i] << "\t " << guj[i] << "\t " << sp[i] << "\t " << total[i] << "\t " << per[i];
            if(per[i] <=35)
            {
                cout <<" \tstudent is fail";
            }
            else if(per[i] >= 90)
            {
                cout <<"\tgrade A";
            }
            else if(per[i] >=80 && per[i] <= 90)
            {
                cout <<"\tgradr B";
            }
            else if(per[i] >=70 && per[i] <= 80)
            {
                cout <<"\tgrade C";
            }
            else if(per[i] >=60 && per[i] <=70)
            {
                cout <<"\tgrade D";
            }
            else
            {
               cout << "\tgrade E";
            }
        }
}

int main()
{
        int eng[5], guj[5], sp[5], total[5], per[5], i=0;

       
        result(eng,guj,sp,total,per);
        return 0;
}