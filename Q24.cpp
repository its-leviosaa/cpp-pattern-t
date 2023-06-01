//While giving input 4 this is the output4
// 1 1 1 1
//   2 2 2
//     3 3
//       4
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=1;
        //printing space of a row
        //agar yaha pe j use karenge toh niche j ka value h usme problem hoga so take another variable
        while (space<i)
        {
            cout<<"  ";
            space++;
        }
        //printing number
        int j = 1;
        while (j<=n-i+1)//no of * is same as row number
        {
            cout<<i<<" ";
            //cout<<" *"; //->ye karte hi traingle ban jaayega
            j++;
        }
        cout<<endl;
        i++;
    }
}