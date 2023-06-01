//While giving input 4 this is the output
// * * * *
// * * *
// * *
// *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=n;
    while(i>=1)
    {
        int j=1;//column 1 se start
        while(j<=i)//i no. of column should be present
        {
            cout<<"* ";
            j++;
        }
        i--;
        cout<<endl;
    }
}