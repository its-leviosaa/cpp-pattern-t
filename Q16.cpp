//While giving input 4 this is the output
// A
// A A
// A A A
// A A A A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;//column 1 se start
        char ch='A';
        while(j<=i)//i no. of column should be present
        {
            cout<<ch<<" ";
            j++;
        }
        i++;
        ch++;
        cout<<endl;
    }
}