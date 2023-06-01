//While giving input 4 this is the output
// A
// B C
// C D E
// D E F G
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
        char ch ='A'+i-1;
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