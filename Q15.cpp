//While giving input 4 this is the output
// A B C D
// B C D E
// C D E F
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
        char ch = (char)(65+i-1);
        while(j<=n)//3 column should be present
        {
            cout<<ch<<" ";
            j++;
            ch++;
        }
        i++;
        cout<<endl;
    }
}