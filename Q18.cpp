//While giving input 4 this is the output
// A
// B C
// D E F
// G H I J
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char ch ='A';
    while(i<=n)
    {
        int j=1;//column 1 se start
        while(j<=i)//i no. of column should be present
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }
        i++;
        cout<<endl;
    }
}