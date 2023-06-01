//jab tak i=1 hai tab tak A print
//jab tak i=2 hai tab tak B print and so on..
//While giving input 4 this is the output
// A A A A
// B B B B
// C C C C
// D D D D
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
        while(j<=n)//3 column should be present
        {
            cout<<(char)(65+i-1)<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}