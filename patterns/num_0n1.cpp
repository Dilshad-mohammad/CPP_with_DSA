#include<iostream>
using namespace std;

int main( )
{
    int count=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            if(i>=j && (i+j)%2==0){
            cout<<" 1" ;
            }
            else{
                cout<<" 0";
            }
        }
        count += 1;
        cout<<"\n";
    }
return 0;
}