#include<iostream>

using namespace std;

void print(int i, int n)
{
        for(i=n; i>=1; i--)
        {
                cout << ", "<< i;
        }
}

int main()
{
        int i,n;

        cout << "enter value of n";
        cin >> n;

        print(i,n);
        return 0;

}