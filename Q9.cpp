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
        int j=i;//column row number se start
        while(j<2*i/*ya i + i*/)
        {
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}