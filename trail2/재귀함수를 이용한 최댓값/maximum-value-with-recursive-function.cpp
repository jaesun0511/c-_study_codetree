#include <iostream>
using namespace std;

int high(int arr[], int n){
    if(n==1){
        return arr[0];
    }

    if(arr[n-1]>=arr[n-2]){
        arr[n - 2] = arr[n - 1];
        return high(arr, n-1);
    }
    else{
        return high(arr, n - 1);
    }
}

int main() {
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max_val=high(arr, n);
    cout<<max_val;
    // Please write your code here.
    return 0;
}