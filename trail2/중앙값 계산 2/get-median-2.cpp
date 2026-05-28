#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    
        if((i+1)%2==1){
            sort(arr, arr+i+1);
            cout<<arr[i/2]<<' ';
        }
    }


    // Please write your code here.
    return 0;
}