#include<iostream>
using namespace std;

int linearSearch( int arr[],int n, int key){

    for(int i=0;i<=n;i++){
        if(arr[i]==key){
            cout<<"the key element is on the index"<<endl;
            return i;
        }
    }
    return -0000;
}
int main( ){
    cout<<"enter the seize of array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array";

    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key"<<endl;
    int key;
    cin>>key;
    cout<<linearSearch(arr,n,key);
}