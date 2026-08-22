#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin>>n>>t;
    
    if (n <= 0) {
        cout << 0 << endl;
        return 0;
    }

    int arr[1005];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max_sq=0;
    int csq=0;
    
    for(int i=0; i<n; i++){
        if(arr[i]>t){
            csq++;
        }
        else{
            csq=0;
        }

        if(csq>max_sq){
            max_sq=csq;
        }
    }
    cout<<max_sq;
    // Please write your code here.
    return 0;
}