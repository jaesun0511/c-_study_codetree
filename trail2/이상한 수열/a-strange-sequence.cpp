#include <iostream>
using namespace std;

int seq(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else if(n<=0){
        return 0;
    }
    return seq(n/3)+seq(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<seq(n);
    // Please write your code here.
    return 0;
}