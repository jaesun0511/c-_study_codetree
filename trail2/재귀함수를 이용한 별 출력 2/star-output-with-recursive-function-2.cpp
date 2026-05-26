#include <iostream>
using namespace std;

void printstar(int n){
    if(n==0){
        return;
    }

    for(int i=0; i<n; i++){
        cout<<'*'<<' ';
    }
    cout<<endl;
    printstar(n-1);
    for(int i=0; i<n; i++){
        cout<<'*'<<' ';
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    printstar(n);
    // Please write your code here.
    return 0;
}