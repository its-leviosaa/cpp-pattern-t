//While giving input 4 this is the output
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;
int main()
{

    //for output pattern below this is the code 
    /*
        1
        1 1
        1 1 1
        1 1 1 1
        1 1 1 1 1
    */
    // int n;
    // cin>>n;
    // int i=1;
    // int count =1;
    // while(i<=n)
    // {
    //     int j=1;//column 1 se start
    //     while(j<=i)
    //     {
    //         cout<<count<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    //}
    int n;
    cin>>n;
    int i=1;
    int count =1;
    while(i<=n)
    {
        int j=1;//column 1 se start
        while(j<=i)
        {
            cout<<count<<" ";
            j++;
            count++;
        }
        i++;
        cout<<endl;
    }
}