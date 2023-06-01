//While giving input 4 this is the output
// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;//column 1 se start baar baar kyunki j increase kar jaa raha loop mein
        while(j<=i)//3 column should be present
        {
            cout<<i-j+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}