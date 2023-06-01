//While giving input 4 this is the output
//    *
//   **
//  ***
// ****
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //printing space of a row
        int space = 1;
        while (space<=n-i)
        {
            cout<<" ";
            space++;
        }
        //printing asterisk
        int j=1;
        while (j<=i)//no of * is same as row number
        {
            cout<<"*";
            //cout<<" *"; //->ye karte hi traingle ban jaayega
            j++;
        }
        cout<<endl;
        i++;
    }
}