//While giving input 4 this is the output 
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
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
        while (space<=n-i)
        {
            cout<<"  ";
            space++;
        }
        //printing number
        int j=1;
        while (j<=i)//no of digit is same as row number
        {
            cout<<j<<" ";
            j++;
        }
        j=i-1;
        while (j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}