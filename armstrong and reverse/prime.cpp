// Checks If the Given number is Prime...
#include<iostream>
#include<cmath>
using namespace std;

main( ){
    int n;
    cin>>n;
    bool flag=0;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
        cout<<"non-Prime"<<endl;
        flag=1;
        break;
        }
    }
    if(flag==0)
    {
        cout<<"prime Number"<<endl;
    }
}