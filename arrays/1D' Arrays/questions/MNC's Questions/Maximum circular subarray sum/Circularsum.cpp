// When we move to 1ST element after traversing LAST one then the array is called circular Array.
//the process is called WRAPPING... 

#include<iostream>
#include<climits>
using namespace std;

int Kadane(int arr[], int n){
    int currentsum = 0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum =0;
        }
        maxsum = max(maxsum,currentsum);
    }
    return maxsum;
}
int main( ){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int wrapsum;
    int nowrap;

    nowrap = Kadane(arr,n);
    int totalsum = 0;
    for(int i=0;i<n;i++){
        totalsum+= arr[i];
        arr[i] =- arr[i];
    }

    wrapsum = totalsum + Kadane(arr,n);

    cout << max(wrapsum,nowrap)<<endl;
}