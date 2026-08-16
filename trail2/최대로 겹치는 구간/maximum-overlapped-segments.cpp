#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[200]={};
    int x,y;
    int offset=100;
    int max=0;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x>>y;
        for(int j=x+offset; j<y+offset; j++){
            arr[j]=arr[j]+1;
        }
    }
    for(int i=0; i<200; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    // Please write your code here.
    return 0;
}