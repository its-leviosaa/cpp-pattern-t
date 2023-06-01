//While giving input 4 this is the output 
//       1
//     2 3
//   4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int num = 1;//iska value increase hona chahiye that's why loop mein nhi daale
    while(i<=n)
    {
        int space=1;
        //printing space of a row
        //agar yaha pe j use karenge toh niche j ka value h usme problem hoga so take another variable
        while (space<=n-i)
        {
            cout<<"  ";
            space++;
        }
        //printing number
        int j=1;
        while (j<=i)//no of digit is same as row number
        {
            cout<<num<<" ";
            j++;
            num++;
        }
        cout<<endl;
        i++;
    }
}