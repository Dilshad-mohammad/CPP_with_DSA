#include<iostream>
using namespace std;

int factn(int n){
    int factn=1;
    for(int i=2;i<=n;i++){
        factn*=(i);
    }
    cout<<"factorial of "<<n<<" is: "<<factn<<endl;
    return factn;
}
int factr(int r){
    int factr=1;
    for(int j=2;j<=r;j++){
        factr*=(j);
    }
    cout<<"factorial of "<<r<<" is: "<<factr<<endl;
    return factr;
}
int factc(int c){
    int factc=1;
    for(int k=2;k<=c;k++){
        factc*=(k);
    }
    cout<<"factorial of (n-r) = "<<c<<" is: "<<factc<<endl;
    return factc;
}

int main( ){
    int nCr,n,r,c;
    cin>>n>>r;
    c = (n-r);
    nCr = factn(n)/(factr(r)*factc(c));
    cout<<"value of nCr is: "<<nCr<<endl;
    
}