#include<iostream>
using namespace std;

int main()
{
    int n,row,col;
    cout<<"Enter the number: ";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)//Space print
        {
            cout<<"  ";
        }

        for(col=1;col<=row;col++)//Number print
        {
            cout<<row<<" ";
        }

        cout<<endl;
    }
}