// selection sort iterates over array and swaps if an element is greater than previous elements...
#include<iostream>
using namespace std;

int selectSort( ){

}
main( ){
    int n;
    cin>>n;
    int arr[n];

    for(int i=1;i<=n;i++){
       cin>>arr[i];
    }
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    }
    cout<<arr[i]<<endl;
}
}