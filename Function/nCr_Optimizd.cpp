#include<iostream>
using namespace std;

int fact(int n){
    int factn=1;
    for(int i=2;i<=n;i++){
        factn*=(i);
    }
    //cout<<"factorial of "<<n<<" is: "<<factn<<endl;
    return factn;
}

int main( ){
    int nCr,n,r,c,a;
    cin>>n>>r;
    c = (n-r);
    nCr = fact(n)/(fact(r)*fact(c));
    cout<<"value of nCr is: "<<nCr<<endl;
    
}