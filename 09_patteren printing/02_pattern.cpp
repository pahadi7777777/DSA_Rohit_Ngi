#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Input the number: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }

        for(col=1;col<=row;col++)   //1 to row
        {
            cout<<col<<" ";
        }

        for(col=row-1;col>=1;col--) // row-1 to 1
        {
        cout<<col<<" ";
        }

        cout<<endl;
    }
int m;
cout<<"Input the number";
cin>>m;
for(row=1;row<=m;row++)
    {
        for(col=1;col<=m-row;col++)
        {
            cout<<"  ";
        }

        for(col=row;col>=1;col--)
        cout<<col<<" ";

        cout<<endl;
    }
}
