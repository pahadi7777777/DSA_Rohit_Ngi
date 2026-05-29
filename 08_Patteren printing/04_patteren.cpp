#include<iostream>
using namespace std;

int main()
{
    int n,row,col;
    cout<<"Enter the number: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)// Space print
        {
            cout<<"  " ;
        }
        for(char name='A';name<='A'+row-1;name++)// Character print
        {
            cout<<name<<" " ;
        }
        cout<<endl;
    }
}