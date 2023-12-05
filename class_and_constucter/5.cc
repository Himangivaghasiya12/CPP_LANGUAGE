/* write a program to find student result  total and per of 4 subject .*/


#include<iostream>

using namespace std;

class student 
{
    private:
            int eng ,sci, guj,sp,total;
            float per;

    public:

           int totall(int eng, int sp, int sci,int guj)
           {
                
               return total = eng+sp+sci+guj;
               //cout << "total is  " << total << "\n";
           } 
           int  percentage(int total)
           {
               return per = total/4;
               //cout << " per is  " << per << " "; 
           }
           ~student()
           {
                    if(per>=33)
                    {
                        cout << "congratulation you pass the exam.  ";
                    }
                    else 
                    {
                        cout << "better luck next time  ";
                    }
           }
};
int main()
{
    int eng,sp,guj,sci,total,per;
    cout << "enter eng marks  ";
    cin >> eng ;

    cout << "enter sp marks  ";
    cin >> sp;

    cout << " enter guj marks  ";
    cin >> guj;

    cout << " enter sci marks ";
    cin >> sci;

    
    student s1;

    total =s1.totall(eng,sp,guj,sci);
    per = s1.percentage(total);

     cout << "total  =  "<<total<<endl;
     cout << "per  =  "<<per<<endl;
    return 0;
}