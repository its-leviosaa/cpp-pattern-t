//While giving input 4 this is the output
// A B C D
// A B C D
// A B C D
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
        //char ch = 'A' -> iss method se bhi ban sakta h
        while(j<=n)//3 column should be present
        {
            cout<<(char)(65+j-1)<<" ";
            j++;
            //ch++;
        }
        i++;
        cout<<endl;
    }
}