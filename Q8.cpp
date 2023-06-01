//While giving input 4 this is the output
// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int temp=i;
        int j=1;//column 1 se start
        while(j<=i)
        {
            cout<<temp<<" ";
            temp++;
            j++;
        }
        i++;
        cout<<endl;
    }
}