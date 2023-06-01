//While giving input 3 this is the output
/*A B C
A B C
A B C*/
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
        int c = 65;
        while(j<=n)//3 column should be present
        {
            cout<<(char)c<<" ";//typecasting
            c++;
            j++;
        }
        i++;
        cout<<endl;
    }
}