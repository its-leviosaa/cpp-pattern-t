//While giving input 4 this is the output
// D
// C D
// B C D
// A B C D
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
        char ch ='A'+n-i;
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