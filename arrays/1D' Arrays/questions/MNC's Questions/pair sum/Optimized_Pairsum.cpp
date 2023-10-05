/*This is only for sorted arrays...
  If array is not sorted implement sorting code first
  Time Complexity O(n)
*/

#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int key){

    int low = 0;
    int high = n-1;

    while(low<high){
        if(arr[low] + arr[high] == key){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>key){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    int n;
    int key;
    cin >> n >>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }

    cout << pairsum(arr,n,key)<<endl;
}