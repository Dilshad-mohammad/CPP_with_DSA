/*
Check if there exists two elements in an array such that their sum is equal to given k
Time Complexity is O(n*n)
*/

#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        if(arr[i] + arr[j]==key){
            cout << i <<" "<<j<<endl;
            return true;
            }
        }
    }
    return false;
}
int main( ){
    int n;
    int key;
    cin >> n >> key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
cout << pairsum(arr, n,key)<<endl;;

}