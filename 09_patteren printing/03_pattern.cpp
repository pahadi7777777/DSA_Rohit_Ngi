#include<iostream>
using namespace std;

int main()
{
    int n, row,col;
    cout<<"Input the number: ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=((2*n-1)-(2*row-1))/2;col++)       // this is  (2*n-1-(2*row-1))/2 = n-row
        {
            cout<<"  ";
        }

        for(col=1;col<=2*row-1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}