#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n,m=0;
    cin>>n;
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    sort(arr1, arr1+n);

    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    sort(arr2, arr2+n);

    for(int i=0; i<n; i++){
        if(arr1[i]==arr2[i]){
            m++;
        }
    }
    if(m==n){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    // Please write your code here.
    return 0;
}