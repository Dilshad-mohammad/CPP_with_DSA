#include<iostream>
using namespace std;

int main( )
{
    int count=1;
    int row,column;
    cin>>row>>column;
    for(int i=1;i<=row;i++)
    {   
        for(int j=1;j<=column;j++)
        {
            if(i>=j){
            cout<<count;
            cout<<" ";
            }
        }
        count += 1;
        cout<<"\n";
    }
return 0;
}