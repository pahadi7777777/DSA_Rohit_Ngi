#include<iostream>
using namespace std;

int main()
{
    int i=1;
    while(i<=10)
    {
        if(i==4)
        break;
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    for(int c=1;c<=10;c++)
    {
        if(c%4==0)
        continue;
        cout<<c<<" ";
    }
}