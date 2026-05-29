#include<iostream>
using namespace std;
int main ()
{
    int n,row,col;
    cout<<"Input the number: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)//Space print
        {
            cout<<"  ";
        }

        for(col=1;col<=2*row-1;col++)// Pattern print
        {
            cout<<"x ";
        }
        cout<<endl;
    }
}
