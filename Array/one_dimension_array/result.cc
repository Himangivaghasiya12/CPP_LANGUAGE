// write 5 student result program show, 3 subject marks ,total marks , percentage  and grade . 



#include <iostream>  

using namespace std;
  
int main()  
{  
    int eng[5], guj[5],sp[5],total[5],per[5]; 
   
   
    for(int i=0; i<5; i++)  
    {  
        cout << "\nEnter  student marks-->  "<< i+1<< "\n";
        
		cout << "Enter eng marks: ";
        cin >> eng[i];
  
        cout << "Enter guj marks: ";
        cin >> guj[i]; 
 
        cout << "Enter sp marks: ";
        cin >> sp[i];  
        
        total[i] = eng[i] + guj[i] + sp[i];
        per[i] = ( total[i] * 100 )/ 300;

	
        
    }
    
    cout  << "\n";
    cout << "No.\t eng \t guj\t sp \t total \t per \t grade \n";
    
    for(int i=0; i<5; i++)  
    {  
		cout << "\n"<<i+1 << "\t"<< eng[i] << "\t"<< guj[i] << "\t"<< sp[i] << "\t"<< total[i] << "\t"<< per[i]<< "\t";
		
		if(per[i] <= 35 )
		{
			cout << "student if fail";
		}

		else if(per[i] >=90)
		{
			cout << "grade A";
		}

		else if(per[i] >=80 && per[i] <=90)
		{
			cout << "grade b";
		}
		
		else if(per[i] >=70 && per[i] <=80)
		{
			cout << "grade c";
		}
		
		else if(per[i] >=60 && per[i] <=70)
		{
			cout << "grade d";
		}
		
		else
		{
			cout << "grade e";
		}
		
    }

   return 0;  
}

	 									  