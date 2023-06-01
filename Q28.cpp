//While giving input 4 this is the output
// 1 2 3 4 4 3 2 1
// 1 2 3 * * 3 2 1
// 1 2 * * * * 2 1
// 1 * * * * * * 1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //printing number from 1 to n-i+1
        int j=1;
        while (j<=n-i+1)
        {
            cout<<j<<" ";
            j++;
        }
        //printing * (i-1)*2 times
        j=1;
        while (j<=(i-1)*2)
        {
            cout<<"* ";
            j++;
        }
        //priting number from n-i+1 to 1
        j=n-i+1;
        while (j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}